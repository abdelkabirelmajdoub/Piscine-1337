/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:09:41 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/12 16:06:58 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		*(range + i) = min;
		min++;
		i++;
	}
	return (range);
}
// int main()
// {
//     int *range;
//     range = ft_range(1,5);
//     printf("%d",*(range + 5));
// }
