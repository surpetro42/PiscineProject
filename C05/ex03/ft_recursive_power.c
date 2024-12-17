/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:20:40 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/31 14:04:25 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_recursive_power(int nb, int power);
int main()
{
    int number = 2;
    int power = 3;

    int result = ft_recursive_power(number, power);
    printf("%d", result);
    return 0;
}*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
