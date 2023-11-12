/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:31:30 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/12 19:52:01 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (Value *(Value > 0) + ((-Value) * (Value < 0)))

#endif

//ft_abs.c
//include "ft_abs.h"
//include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ABS(-100));
// 	printf("\n");
// }

// int i = -101;

// ABS(i);
// printf("%d", ABS(i));
// printf("\n");
