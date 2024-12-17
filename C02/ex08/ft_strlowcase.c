/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:02:34 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/24 15:28:46 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//char *ft_strlowcase(char *str);
/*int main()
{
    char string[] = "My Name Is Gustavo";
    
    
    // ft_strupcase(string);
    printf("%s\n", ft_strlowcase(string));
    return 0;
}*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}
