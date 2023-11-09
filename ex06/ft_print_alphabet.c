/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:26:52 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/09 13:42:34 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// void	ft_putchar(char c)
// {
//     write (1, &c, 1);
// }

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 122)
	{
		ft_putchar (c);
		c++;
	}
}

// int	main(void)
// {
//     ft_print_alphabet();
//     write(1, "\n", 1);
//     return (0);
// }
