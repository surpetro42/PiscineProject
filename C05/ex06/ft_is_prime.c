/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:37:27 by surpetro          #+#    #+#             */
/*   Updated: 2023/11/01 20:09:12 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_is_prime(int nb);
int main()
{
    int x = 510;
    int result = ft_is_prime(x);
    printf("%d", result);
    return 0;
}*/
int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb >= 2)
	{
		while (x <= nb)
		{
			if ((nb % x == 0) || (nb <= 0))
				return (0);
			else
			{
				return (1);
			}
			++x;
		}
	}
	return (0);
}
