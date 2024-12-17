/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:19:23 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/26 00:02:14 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//char *ft_strncat(char *dest, char *src, unsigned int nb);
/*int main() {
    char dest[50] = "a   ";
    char src[] = "b as";
    unsigned int n = 2;
    ft_strncat(dest, src, n);

    printf("%s\n",dest);

    return 0;
}*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		++x;
	while (src[y] != '\0' && y < nb)
	{
		dest[x + y] = src[y];
		++y;
	}
	dest[x + y] = '\0';
	return (dest);
}
