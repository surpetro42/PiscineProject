/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:40:02 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/19 15:52:06 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	swapped;
	int	i;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
		size--;
	}
}

/* int main() {
    int numbers[] = {1, -25, 88, 410, -50};

    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("nerka zangvac : ");
    for (int i = 0; i < length; i++) {
        printf("%d ,", numbers[i]);
    }

    ft_sort_int_tab(numbers, length);

    printf("\ndasavorvac zangvac : ");
    for (int i = 0; i < length; i++) {
        printf("%d ,", numbers[i]);
    }
    
    return 0;
}*/
