/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:35:27 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/17 18:25:23 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 5;
	max = 10;
	range = ft_range(min, max);
	if (range)
	{
		i = 0;
		while (i < max - min)
		{
			printf("%d ", range[i]);
			i++;
		}
		free(range);
		printf("\n");
	}
	else
	{
		printf("NULL");
	}
	return (0);
}*/
