/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:52:34 by youjhong          #+#    #+#             */
/*   Updated: 2023/01/29 00:35:28 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error_check(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
				j++;
		}
			i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long long	nb;

	nb = nbr;
	i = ft_strlen(base);
	if (error_check(base) == 1)
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb *= -1;
		}
		if (nb < i)
			write (1, &base[nb], 1);
		else
		{
			ft_putnbr_base(nb / i, base);
			ft_putnbr_base(nb % i, base);
		}
	}
}
