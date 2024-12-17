/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:45:45 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/25 19:02:33 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//int ft_str_is_printable(char *);

/*int main()
{
    char myChar[] = "00";
    int x = ft_str_is_printable(myChar);
    
    printf ("%d", x);
    return 0;    
}*/

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= ' ' && str[x] <= '~')
			++x;
		else
			return (0);
	}
	return (1);
}
