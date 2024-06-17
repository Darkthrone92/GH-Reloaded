/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:06:07 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/17 19:24:59 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	show_char(char **argv)
{
	int		fd;
	int		ret;
	char	temp[1];

	ret = 1;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (ret > 0)
	{
		ret = read(fd, temp, 1);
		if (ret == -1)
			return (0);
		if (ret > 0)
			ft_putchar(temp[0]);
	}
	ret = close(fd);
	if (ret == -1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		if (show_char(argv) == 0)
			return (0);
	}
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
