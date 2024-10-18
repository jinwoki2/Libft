/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:48:41 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 12:13:16 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int str[10] = {1, 2, 3, 4, -1, 3, 4}; 
	int c = -1;
	size_t num = 100;
	int * a = (int *)ft_memchr(str, c, num);
	int * b = (int *)memchr(str, c, num);
	printf("ft_:%d\n", *a);
	printf("org:%d", *b);
	return (0);
}
 */