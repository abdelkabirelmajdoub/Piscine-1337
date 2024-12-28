/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:22:09 by ael-majd          #+#    #+#             */
/*   Updated: 2024/07/30 17:40:22 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (src[length] != '\0')
	{
		length ++;
	}
	if (size < 1)
	{
		return (length);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (length);
}
// int main()
// {
//     char src[] = "hello";
//     char dest[20];
//     printf("%d\n",ft_strlcpy(dest,src,5));
//     printf("%s",dest);
// } 
