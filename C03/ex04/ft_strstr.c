/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:26:18 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/27 15:24:02 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);
int main() {
    char haystack[] = "This is a  example.";
    char needle[] = "is";
    
   char *result = ft_strstr(haystack, needle);
    
    if (result != NULL) {
        printf("gtnvely nmana: %s\n", result);
    } else {
        printf("chi gtnvel.\n");
    }
    
    return 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] == str[a + b])
		{
			if (to_find[b + 1] == '\0')
				return (str + a);
			b++;
		}
		a++;
	}
	return (0);
}
