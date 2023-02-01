/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:42:49 by youjhong          #+#    #+#             */
/*   Updated: 2023/01/14 16:08:06 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);
void ft_line0(int x,int a,int b,int c)
{
	int i;
	i = 0;
	if (x >=1)
		ft_putchar(a);
	while (i<=(x-3))
	{
		ft_putchar(b);
		i++;
	}
	if(x>=2)
		ft_putchar(c);
	ft_putchar('\n');
}

