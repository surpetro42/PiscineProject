/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:14:08 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/24 15:28:56 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

/*int main()
{
    char myChar[] = "a";
    int x = ft_str_is_lowercase(myChar);
    
    printf ("%d", x);
    return 0;    
}*/

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	if (str == '\0')
		return (1);
	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			++x;
		else
			return (0);
	}
	return (1);
}
