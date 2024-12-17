/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:16:51 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/31 13:49:01 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_iterative_factorial(int nb);
int main()
{
    int x = 545;
    int number = ft_iterative_factorial(x);
    printf("%d", number);
    return 0;
}*/

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}
