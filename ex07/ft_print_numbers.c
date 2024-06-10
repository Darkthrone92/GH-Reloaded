/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:03:27 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/07 13:02:59 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
