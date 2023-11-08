/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:18:08 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/08 12:46:20 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = "DorukhanDefne";
// 	ft_putstr(str);
// 	return (0);
// }
