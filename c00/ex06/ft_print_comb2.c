/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:06:49 by youjhong          #+#    #+#             */
/*   Updated: 2023/01/19 17:10:26 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_putchar(left / 10 + '0');
			ft_putchar(left % 10 + '0');
			ft_putchar(' ');
			ft_putchar(right / 10 + '0');
			ft_putchar(right % 10 + '0');
			if (left == 98 && right == 99)
			{
				break ;
			}
			write(1, ", ", 2);
			right++;
		}
		left++;
	}
}
