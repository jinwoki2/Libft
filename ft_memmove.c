/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:18:53 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/17 22:11:12 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t cnt)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	if (dest_ptr > src_ptr)
	{
		i = cnt - 1;
		while (cnt > 0)
		{
			dest_ptr[i] = src_ptr[i];
			i--;
			cnt--;
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, cnt));
}
/* 
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hello";

	ft_memmove(str1 + 2, str1, 3);
	memmove(str2 + 2, str2, 3);
	printf("%s\n%s\n", str1, str2);

	return 0;
}
 */