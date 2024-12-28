/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:21:15 by ael-majd          #+#    #+#             */
/*   Updated: 2024/08/15 10:00:21 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) \
    ({ \
        int abs_value = (Value); \
        if (abs_value < 0) { \
            abs_value = -abs_value; \
        } \
        abs_value; \
    })

#endif