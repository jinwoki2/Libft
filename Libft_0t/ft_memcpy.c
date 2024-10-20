/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:42:34 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/17 21:18:45 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t cnt)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	while (i < cnt)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return ((void *)dest_ptr);
}
/* 
#include <stdio.h>
#include <string.h>

int main(void) 
{
    char src[] = "Hello";
    char dest[20];
    size_t cnt = 7;

	memset(dest, 0, 20);
    ft_memcpy(dest, src, cnt);
    printf("ft_:%s\n", dest);

	memset(dest, 0, 20);
	memcpy(dest, src, cnt);
    printf("org:%s\n", dest);

    return 0;
}
 */