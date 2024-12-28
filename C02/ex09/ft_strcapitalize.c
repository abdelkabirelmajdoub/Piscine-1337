/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:18:11 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/03 13:17:16 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (i == 0 || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && 
					!(str[i - 1] >= 'A' && str[i - 1] <= 'Z') && 
					!(str[i - 1] >= '0' && str[i - 1] <= '9')))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
// int main()
// {
//     char str[] = "    89Sa LUt, CoF 77hhf 42MdsA )faf";
//    	ft_strcapitalize(str);
//     printf("%s",str); 
// }