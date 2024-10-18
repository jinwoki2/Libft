/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:31:32 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/17 20:52:20 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ss[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[10];
	int		c;
	int		i;

	c = 'a';
	i = 0;
	memset(str, c, sizeof(str));
	while (i < sizeof(str))
	{
		printf("%c ", str[i]);
		i++;
	}
	printf("\n");
	memset(str, 0, sizeof(str));
	ft_memset(str, c, sizeof(str));
	i = 0;
	while (i < sizeof(str))
	{
		printf("%c ", str[i]);
		i++;
	}
	return (0);
}
 */