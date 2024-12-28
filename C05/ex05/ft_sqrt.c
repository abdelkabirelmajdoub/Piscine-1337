/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:37:54 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/07 20:19:32 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = 0;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			sqrt = i;
		i++;
	}
	return (sqrt);
}
// int main()
// {
//     printf("%d",ft_sqrt(-4));
// }
