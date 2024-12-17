/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:33:54 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/25 13:48:24 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//int ft_str_is_numeric(char *str);
/*int main()
{
	char arr[] = "211564165416";
	int result = ft_str_is_numeric(arr);

    printf("%d", result);
    return 0;
}*/

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
			++x;
		else
			return (0);
	}
	return (1);
}
