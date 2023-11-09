/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:03:12 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/09 13:43:49 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
//     write (1, &c, 1);
// }

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar ('N');
	}
	else
	{
		ft_putchar ('P');
	}
}

// int main(void)
// {
//     ft_is_negative(-42);
//     ft_is_negative(42);
//     ft_is_negative(0);
//    
//     return (0);
// }
