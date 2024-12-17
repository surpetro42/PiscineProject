/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:31:51 by surpetro          #+#    #+#             */
/*   Updated: 2023/11/02 18:27:12 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int i;
	int size;
	int min;
	int max;
	int *tab;

	min = INT_MIN;
	max = INT_MAX;
	size = ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", tab[i]);
		}
		printf("%d\n", size);
	}
	else 
	{
		printf("hi");
	}
}
int ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	*r;
	int	i;



	if (min >= max)
	{
	    *range = NULL;
        return (0);
	}

	x = max - min;
	r = (int *)malloc(sizeof(int) * x);
	
	if (r == NULL)
	    return (-1);
    else 
    {
        i = -1;
    	while (++i < x)
    	{
    		r[i] = min;
    		++min;
		}
    	*range = r;
    	return (i);
    }
//	 	return (r);
}
