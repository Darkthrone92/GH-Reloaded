/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:56:34 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/11 10:57:08 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb > 0)
	{
		while (root * root <= nb)
		{
			if (root * root == nb)
			{
				return (root);
			}
			if (root > 46340)
			{
				return (0);
			}
			root++;
		}
	}
	return (0);
}

/*int	main(void)
{
	int n;

	n = 25;
	printf("La raíz cuadrada de %d es %d\n", n, ft_sqrt(n));
	n = 10;
        printf("La raíz cuadrada de %d es %d\n", n, ft_sqrt(n));
	return (0);
}*/
