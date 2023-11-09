/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:54:11 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/09 13:43:00 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar (char c)
// {
//     write (1, &c, 1);
// }
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= 57)
	{
		ft_putchar (c);
		c++;
	}
}

// int main(void)
// {
//     ft_print_numbers();
//     write (1, "\n", 1);
//     return(0);
// }
