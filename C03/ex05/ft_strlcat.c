/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:53:39 by surpetro          #+#    #+#             */
/*   Updated: 2023/10/30 20:00:18 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a] != '\0' && a < size)
		++a;
	while (src[c] != '\0')
		++c;
	if (size <= a)
		return (size + c);
	while (src[b] != '\0' && a + b < size - 1)
	{
		(dest[a + b] = src[b]);
		++b;
	}
	dest[a + b] = '\0';
	return (a + c);
}
