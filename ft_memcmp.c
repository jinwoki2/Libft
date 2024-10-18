/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:24:46 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/08 13:06:07 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}
/* 
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int num1 = 2147483647;
	int num2 = 2147483646;

	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int result1 = ft_memcmp(ptr1, ptr2, 1);
	int result2 = memcmp(ptr1, ptr2, 1);

	printf("%d %d\n", result1, result2);

	return 0;
}
 */