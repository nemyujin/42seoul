/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:38:57 by youjhong          #+#    #+#             */
/*   Updated: 2023/01/27 20:46:38 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ib;
	unsigned int	i;
	unsigned int	j;

	ib = 0;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (ib < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
		ib++;
	}
	dest[i + j] = '\0';
	return (dest);
}
