/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:02:42 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/09 18:00:44 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	if (src == NULL)
		return (NULL);
	new = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "marve";
// 	char *tmp = ft_strdup(str);
// 	printf("%p\n", str);
// 	printf("%p\n", tmp);
// 	tmp[0] = 'B';
// 	printf("%c\n", str[0]);
// 	printf("%c\n", tmp[0]);
// }