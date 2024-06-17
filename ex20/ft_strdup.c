/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:21:36 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/17 13:06:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_copy(char *str, char *dest)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest [i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_length(src);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!(dest))
	{
		return (NULL);
	}
	return (ft_copy(src, dest));
}

/*int	main(void)
{
	char	*src;
	char	*dp;

	src = "Hola, mundo!";
	dp = ft_strdup(src);
	if (dp == NULL)
	{
		printf("Error al duplicar la cadena\n");
		return (1);
	}
	printf("Cadena original: %s\n", src);
	printf("Cadena duplicada: %s\n", dp);
	free(dp);
	return (0);
}*/
