/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:39:55 by user42            #+#    #+#             */
/*   Updated: 2022/07/20 16:31:06 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <exception>

template <typename T>
class Array
{
    private:
        unsigned int n;
        T* _array;
    public:

    //CONSTRUCTOR
        Array():n(0), _array(NULL){}
        Array(unsigned int len):n(len), _array(NULL)
        {
            if (len >= 0)
                _array = new T[len];
        }
        Array(const Array& a)
        {
            if (_array)
                delete _array;
            n = a.n;
            if (n > 0)
                _array = new T[n];
            for(int i =0; i < n; i++)
                _array[i] = a._array[i];
        }
        Array& operator=(const Array& a)
        {
            if (this != &a)
            {
                if (_array)
                    delete _array;
                n = a.n;
                if (n > 0)
                    _array = new T[n];
                for(int i =0; i < n; i++)
                    _array[i] = a._array[i];
            }
            return (this);
        }
    //DESTRUCTOR
        ~Array()
        {
            if (_array)
                delete [] _array;
            _array = NULL;
            n = 0;
        }
    //GETTER
        T& getArrayIndex(unsigned int i)
        {
            return _array[i];
        }
    //EXECPTION
        class OutOfBonds: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Out of bonds";
                }
        };

        T& operator[](unsigned int i)
        {
            if (!_array)
                throw std::domain_error("_array is not initialized");
            if (i < 0 || i >= n)
                throw OutOfBonds();
            return _array[i];
        }
        unsigned int size() const
        {
            if (n <= 0)
                throw OutOfBonds();
            return n;
        }

};

template <typename T>
void tryType(int n)
{
    Array<T> A(n);
    try
    {
        std::cout << "the size of the array is " << A.size() << std::endl;
        for (int i = 0; i < n; i++)
        {
             A[i] = static_cast<T>(i + '0');
            std::cout << A.getArrayIndex(i) << " | ";
        }
        std::cout << std::endl;
        std::cout << "the first value of the array is: " << A[0] << std::endl;
        std::cout << "a false value : " << A[n + 1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

#endif