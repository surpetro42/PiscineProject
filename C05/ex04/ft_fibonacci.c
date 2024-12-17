/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:38:58 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/30 20:54:21 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_fibonacci(int index);
int main()
{
    int x = 7;
    
    int result = ft_fibonacci(x);
    printf("%d", result);
    return 0;
}*/

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (index);
	}
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
