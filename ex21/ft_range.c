/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:19:45 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/10 15:17:12 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *) malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

// int	main() 
// {
//     int min = 14;
//     int max = 15;
// 	   int	i;

//     int	*result = ft_range(min, max);

//     if (result == 0) 
//         printf("Invalid range: min is greater than or equal to max.\n");
// 	else 
// 	{
//         printf("Generated array: ");
// 		i = 0;
// 		while(i < max - min)
// 		{
//             printf("%d ", result[i]);
// 			i++;
//         }
//         printf("\n");

//         // Don't forget to free the allocated memory
//         free(result);
//     }
//     return 0;
// }
