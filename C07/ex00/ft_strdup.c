/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:23:15 by surpetro          #+#    #+#             */
/*   Updated: 2023/11/02 15:28:41 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*char *ft_strdup(char *src);
int main()
{
    char str[] = "sieg heils";
    char *x = ft_strdup(str);
    
    printf ("%s", x);
    return 0;
}*/

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*arr;

	len = 0;
	while (src[len] != '\0')
		++len;
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (arr == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
