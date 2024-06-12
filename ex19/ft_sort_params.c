/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42.barcelona.com>+#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:59:32 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/12 13:25:57 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_print_arg(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		x++;
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	while (a < argc)
	{
		b = a;
		while (b > 1 && ft_strcmp(argv[b], argv[b - 1]) < 0)
		{
			temp = argv[b - 1];
			argv [b - 1] = argv[b];
			argv[b] = temp;
			b--;
		}
		a++;
	}
	ft_print_arg(argc, argv);
	return (0);
}
