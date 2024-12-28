/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:20:14 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/07 20:11:30 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0) 
		return (0);
	if (nb == 1 || nb == 0) 
		return (1);
	while (i <= nb)
	{
		r = r * i;
		i++;
	}
	return (r);
}
// int main()
// {
//     int nb = 4;
//     printf("%d",ft_iterative_factorial(nb));
// }
