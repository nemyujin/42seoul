/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:22:58 by youjhong          #+#    #+#             */
/*   Updated: 2023/01/31 01:51:59 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s2 != '\0' || *s1 != '\0')
	{
		if (*s1 == *s2)
			s1++;
			s2++;
		if (*s1 < *s2 || *s1 > *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
