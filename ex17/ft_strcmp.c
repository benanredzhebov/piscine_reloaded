/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:22 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/08 13:53:17 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char *s1 = "Defne";
// 	char *s2 = "Dorukhan";

// 	int	result = ft_strcmp(s1, s2);

// 	if (result == 0)
// 		printf("The strings are equal.\n");
// 	else if (result < 0)
// 		printf("The First string is less than Second string.\n");
// 	else
// 		printf("The First string is greater than Second string.\n");
// 	return (0);
// }
