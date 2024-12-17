/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:23:52 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/19 16:14:26 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	storage;

	if (b != 0)
	{
		storage = *a / *b;
		*b = *a % *b;
		*a = storage;
	}
}

/* int main() 
{
	int a = 10;
    int b = 2;
     
    int *pa = &a;
    int *pb = &b;
	printf("%d",	ft_ultimate_div_mod(pa, pb));

	return 0;
} */
