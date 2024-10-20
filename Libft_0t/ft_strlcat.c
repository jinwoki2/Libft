/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:22:33 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 11:10:58 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/* 
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char dest1[10] = "123";
	char *src1  = "456";
	char dest2[10] = "123";
	char *src2  = "456";
	// size_t size = 5;

	size_t result1 = strlcat(dest1, src1, sizeof(dest1));
	size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
	
	printf("%s \n", dest1);
	printf("%ld \n", result1);
	printf("%s \n", dest2);
	printf("%ld \n", result2);
	return 0;
}
 */