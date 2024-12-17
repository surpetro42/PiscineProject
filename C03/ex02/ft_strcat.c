/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:12:43 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/27 15:19:14 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);
int main() {
    char dest[50] = "Hello, ";
    char src[] = "Gagik!";
    
    ft_strcat(dest, src);
    
    printf("%s\n",dest); 
    
    return 0;
}
char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		++x;
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		++y;
	}
	dest[x + y] = '\0';
	return (dest);
}
