/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:23:55 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/12 18:19:59 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// lenght the strings ---------------------->

int	ft_strlen(char *strs[], int si)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < si)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		count += j;
		i++;
	}
	return (count);
}
// // lenght the separateur --------------------->

int	ft_strlsep(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
// here will concatinate ------------------->

void	ft_concat(char **strs, char *sep, char *p, int size)
{
	int	i;
	int	k;
	int	j;
	int	l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			p[k++] = strs[i][j++];
		}
		l = 0;
		while (l < ft_strlsep(sep) && i < size - 1)
			p[k++] = sep[l++];
		i++;
	}
	p[k] = '\0';
}
// finllly :oooo :)

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	char	*emptys;

	if (size == 0)
	{
		emptys = malloc(1);
		*emptys = '\0';
		return (emptys);
	}
	p = malloc(ft_strlen(strs, size) + (size - 1) * ft_strlsep(sep) + 1);
	if (!p)
		return (NULL);
	ft_concat(strs, sep, p, size);
	return (p);
}
// int main()
// {
//     char *strs[] = {"Hello", "world", "!","jjjj"};
//     char sep[] = "#";
//     int size = 6;
//     printf("%s\n",ft_strjoin(size,strs,sep));
// }