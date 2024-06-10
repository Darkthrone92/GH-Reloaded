/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:37:20 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/07 14:49:56 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("Antes de ft_swap:\n");
	printf("x = %d, y =%d\n", x, y);
	ft_swap(&x, &y);
	printf("Después de ft_swap:\n");
	printf("x = %d, y = %d\n", x, y);
	return (0);
}*/
