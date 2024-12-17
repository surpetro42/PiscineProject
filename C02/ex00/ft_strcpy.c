/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:15:30 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/24 15:52:40 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//char *ft_strcpy(char *dest, char *src);

/* int main()
{
   char dest[100];
   char src[19] = "Rammestein - Sonne";

   ft_strcpy(dest, src);

   printf("%s", dest);

   return 0;
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
