/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:59:57 by youjhong          #+#    #+#             */
/*   Updated: 2023/01/28 03:27:11 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k])
		k++;
	if (size <= i)
		k += size;
	else
		k += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
			dest[i] = src[j];
			i++;
			j++;
	}
	dest[i] = '\0';
	return (k);
}
