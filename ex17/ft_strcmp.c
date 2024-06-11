/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:25:38 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/11 13:53:53 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "Hola";
	str2 = "Hola";
	str3 = "Ho";
	str4 = "Holala";
	printf("La diferencia entre %s y %s es: %d\n",
		str1, str2, ft_strcmp(str1, str2));
	printf("La diferencia entre %s y %s es: %d\n",
		str1, str3, ft_strcmp(str1, str3));
	printf("La diferencia entre %s y %s es: %d\n",
		str1, str4, ft_strcmp(str1, str4));
	return (0);
}*/
