/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:59 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/08 12:00:20 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
		sqrt ++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

// int	main(void)
// {
// 	int	nb = 25;
// 	printf("The square root of %d is %d\n", nb, ft_sqrt(nb));
// 	return (0);
// }
