/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:46:02 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/10 12:44:25 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		fact = fact * nb;
		nb --;
	}
	return (fact);
}

/*int	main(void)
{
	int	n;

	n = 5;
	printf("Factorial de %d es %d\n", n, ft_iterative_factorial(number));
	n = 0;
   	printf("Factorial de %d es %d\n", n, ft_iterative_factorial(number));
    	n = -3;
    	printf("Factorial de %d es %d\n", n, ft_iterative_factorial(number));
    	n = 7;
    	printf("Factorial de %d es %d\n", n, ft_iterative_factorial(number));
   	return (0);
}*/
