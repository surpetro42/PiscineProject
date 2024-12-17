/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:21:05 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/25 21:22:54 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//int ft_strlen(char *str);
/*int main()
{
    char string[] = "asdas";
    int x = ft_strlen(string);
    printf ("%d", x );
    return 0;
}*/

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		++x;
	return (x);
}
