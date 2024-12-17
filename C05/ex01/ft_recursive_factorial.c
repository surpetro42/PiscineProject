/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:54:32 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/31 14:03:16 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_recursive_factorial(int nb);
int main()
{
    int x = 5;
    int result = ft_recursive_factorial(x);
    printf ("%d", result);
    return 0;
}*/

int	ft_recursive_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		result *= nb * ft_recursive_factorial(nb - 1);
	return (result);
}
