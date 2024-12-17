/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:58:17 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/29 12:09:53 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_atoi(char *str);
int main()
{
    char string[] = " ---+--+1234ab567";
    int result = ft_atoi(string);
    printf("%d\n", result);
    return 0;
}*/
int	ft_atoi(char *str)
{
	int	nb;
	int	number;
	int	x;

	nb = 1;
	number = 0;
	x = 0;
	while (str[x] == ' ' || str[x] == '\f' || str[x] == '\n'
		|| str[x] == '\r' || str[x] == '\t' || str[x] == '\v')
		++x;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			nb *= -1;
		++x;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		number *= 10;
		number += str[x] - '0';
		++x;
	}
	return (nb * number);
}
