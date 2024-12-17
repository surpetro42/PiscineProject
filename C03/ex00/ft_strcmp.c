/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:54:14 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/27 15:14:53 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main() {
    char dd[] = "HElloooo";
    char str[] = "HElloo";
    
    int result = ft_strcmp(dd, str);
    
    if (result == 0) {
        printf("Строки равны\n");
    } else if (result < 0) {
        printf("Первая строка меньше второй\n");
    } else {
        printf("Первая строка больше второй\n");
    }

    return 0;
}
int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (s1[x] - s2[x]);
}
