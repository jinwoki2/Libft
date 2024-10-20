/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:18:21 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/05 14:04:09 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/* 
#include <stdio.h>
int main(void)
{
	char	src[11] = "0123456789";
	char	dest[50];
	size_t	size;
	size_t	result;

	size = 20;
	result = ft_strlcpy(dest, src, size);
	printf("ft_lcpy complete: %s \n", dest);
	printf("ft_lcpy return: %ld \n", result);

	// i = 0;
	// while (dest[i])
	// {
	// 	dest[i] = 'D';
	// 	i++;
	// }

	// printf("strlcpy complete: %s \n", dest);
	// printf("strlcpy return: %ld \n", strlcpy(dest, src, size));	

	return 0;
}
*/