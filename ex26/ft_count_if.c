/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:56:42 by beredzhe          #+#    #+#             */
/*   Updated: 2023/11/12 14:28:03 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int isEvenLength(char *str) {
    return (strlen(str) % 2 == 0) ? 1 : 0;
}

int ft_count_if(char **tab, int (*f)(char*)) {
    int count = 0;
    for (int i = 0; tab[i] != NULL; i++) {
        if (f(tab[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char *strings[] = {"apple", "banana", "orange", "grape", NULL};

    // Counting the number of strings with even length
    int result = ft_count_if(strings, &isEvenLength);

    printf("Number of strings with even length: %d\n", result);

    return 0;
}
