/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:58:09 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/12 10:56:37 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char i);

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
