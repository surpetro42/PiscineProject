/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:30:02 by surpetro          #+#    #+#             */
/*   Updated: 2023/11/02 16:40:13 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int *ft_range(int min, int max);
int main()
{
    int i = 0;
    int x = -10;
    int y = 10; 
    int *result = ft_range(x, y);
    
    while (i < y - x)
    {
        printf ("%d", result[i]);
        ++i;
    }
    return 0;
}*/
int	*ft_range(int min, int max)
{
	int	x;
	int	*r;
	int	i;

	x = max - min;
	r = (int *)malloc(sizeof(int) * x);
	i = 0;
	while (i < x)
	{
		r[i] = min;
		++i;
		++min;
	}
	return (r);
}
