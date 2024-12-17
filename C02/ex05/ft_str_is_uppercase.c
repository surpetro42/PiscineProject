/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:38:29 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/24 14:36:36 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//int ft_str_is_uppercase(char *str);ft_str_is_printable.c
/*int main()
{
    char myChar[] = "AaA";
    int x = ft_str_is_uppercase(myChar);
    
    printf ("%d", x);
    return 0;    
}*/

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	if (str == '\0')
		return (1);
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			++x;
		else
			return (0);
	}
	return (1);
}
