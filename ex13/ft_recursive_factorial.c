/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:46:47 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/10 12:59:22 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	n;

	n = 5;
	printf("El factorial de %d es %d\n", n, ft_recursive_factorial(n));
	n = 0;
	printf("El factorial de %d es %d\n", n, ft_recursive_factorial(n));
	n = -5;
	printf("El factorial de %d es %d\n", n, ft_recursive_factorial(n));
	n = 10;
	printf("El factorial de %d es %d\n", n, ft_recursive_factorial(n));
	return (0);
}
