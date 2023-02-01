/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:54:13 by youjhong          #+#    #+#             */
/*   Updated: 2023/01/24 23:31:15 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[(unsigned char)str[i] / 16]);
			ft_putchar(hex[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}
