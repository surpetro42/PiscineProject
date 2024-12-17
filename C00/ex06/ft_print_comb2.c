/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:27:56 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/15 21:58:26 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_digits(int num)
{
	char	digit;

	digit = '0' + num / 10;
	write(1, &digit, 1);
	digit = '0' + num % 10;
	write(1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_digits(a);
			write(1, " ", 1);
			print_digits(b);
			if (a == 98 && b == 99)
			{
				return ;
			}
			write(1, ", ", 2);
			++b;
		}
		++a;
	}
}
