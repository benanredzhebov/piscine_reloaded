/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:58:06 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/12 13:55:36 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr( int nb)
// {
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		nb = nb % 10;
// 	}
// 	if (nb < 10)
// 		ft_putchar(nb + '0');
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int	main(void)
// {
//  	int	array[] = {1, 2, 3, 4, 5};
// 	int	size;

//     size = sizeof(array) / sizeof(array[0]);
// 	ft_foreach(array, size, &ft_putnbr);
// 	printf("\n");
// 	return (0);
// }
