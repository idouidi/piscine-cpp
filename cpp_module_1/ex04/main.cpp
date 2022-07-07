/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:13:10 by user42            #+#    #+#             */
/*   Updated: 2022/01/26 18:09:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	error(std::string str)
{
	std::cerr << str << std::endl;
	std::exit(1);
}

bool	isEmpty(char *av2, char *av3)
{
	if (!av2[0] || !av3[0])
		return (true);
	return (false);
}

static void	replace(std::string& newFile, std::string buf, std::string s1, std::string s2)
{
	size_t pos = 0;
	while (true)
	{
		pos = buf.find(s1, pos);
		if (pos == std::string::npos)
			break;
		buf.erase(pos, s1.length());
		buf.insert(pos, s2);
		pos += s2.length();
	}
	newFile.append(".replace");
	std::ofstream write_fd(newFile);
	if (write_fd.fail())
		error("Failed to open file");
	write_fd << buf << std::flush;
	
}

void	fillBufferWitFileContent(std::string& fd, std::string& buffer)
{
	std::ifstream	read_fd(fd);
	char			c;

	if (read_fd.fail())
		error("Failed to open file");
	while (read_fd.get(c))
		buffer += c;
	if (!read_fd.eof())
		error("Failed to read file");
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (isEmpty(av[2], av[3]))
			error("Empty string detected ...");
		std::string newFile = av[1];
		std::string buf;
		fillBufferWitFileContent(newFile, buf);
		replace(newFile, buf, av[2], av[3]);
	}
	else
		error("Error\nUsage: ./replace [FILE NAME] [SRC] [NEW]");
}