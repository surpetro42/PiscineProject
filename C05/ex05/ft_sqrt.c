/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:38:58 by surpetro          #+#    #+#             */
/*   Updated: 2023/11/01 19:55:16 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_sqrt(int nb);
int main()
{
    int x = 81;
    int result = ft_sqrt(x);
    printf("%d", result);
    return 0;
}*/
int	ft_sqrt(int nb)
{
	long	r;
	long	n;

	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	r = 2;
	if (n > 1)
	{
		while (r * r <= n)
		{
			if (r * r == n)
				return (r);
			++r;
		}
	}
	return (0);
}
