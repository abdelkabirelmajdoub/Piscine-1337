/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:31:13 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/04 22:38:36 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dslen;
	unsigned int	srlen;

	dslen = ft_strlen(dest);
	srlen = ft_strlen(src);
	if (size <= dslen) 
		return (size + srlen);
	i = 0;
	while (i + dslen < size - 1 && src[i] != '\0')
	{
		dest[dslen + i] = src[i];
		i++;
	}
	dest[dslen + i] = '\0';
	return (dslen + srlen);
}
// int main()
// {
//     char src[] = "world";
//     char dest[5] = "hello";
//     unsigned int size = sizeof(dest);
//     printf("%d",ft_strlcat(dest,src,size));
// }