/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:58:56 by surpetro          #+#    #+#             */
/*   Updated: 2023/11/01 18:43:44 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_iterative_power(int nb, int power);
int main()
{
    int number = 5;
    int power = 5;

    int result = ft_iterative_power(number, power);
    printf("%d", result);
    return 0;
}*/

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	while (power > 1)
	{
		x *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (x);
}
