/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:41:36 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/25 22:48:02 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void ft_putstr(char *str);
/*int main() {
   char string[] = "Hi nigaaa";
   ft_putstr(string);
   return 0;
}*/

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		++x;
	}
}
