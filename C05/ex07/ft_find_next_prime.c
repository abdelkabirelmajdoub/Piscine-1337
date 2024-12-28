/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:10:41 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/07 20:23:43 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	check;

	i = 1;
	check = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			check++;
		}
		i++;
	}
	if (check <= 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb < nb + 1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (nb);
}
// int main()
// {
//     printf("%d",ft_find_next_prime(22));
// }
