/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:25:02 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/29 12:40:34 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
    char s1[] = "hello";
    char s2[] = "APE";
    unsigned int n = 2;
    int bff = ft_strncmp(s1, s2, n);
    printf("%d", bff);
    return 0;
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && (x < n))
	{
		if (s1[x] > s2[x])
			return (1);
		else if (s1[x] < s2[x])
			return (-1);
		++x;
	}
	return (0);
}
