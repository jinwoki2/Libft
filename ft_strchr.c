/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:56:40 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/10 18:47:49 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr++;
	}
	if ((char)c == '\0' && *ptr == '\0')
		return ((char *)ptr);
	return (NULL);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *str = "teste";
	char c = 'e';
	printf("result ft_:%s\n", ft_strchr(str, c));
	printf("result org:%s", strchr(str, c));
	return 0;
}
 */