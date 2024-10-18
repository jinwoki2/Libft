/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:56:41 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 11:40:23 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			last_idx;

	ptr = s;
	last_idx = ft_strlen(s);
	ptr = ptr + last_idx;
	while (last_idx)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr--;
		last_idx--;
	}
	if (last_idx == 0 && *ptr == (char)c)
		return ((char *)ptr);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	c;

	s1 = "te_st_e";
	c = '0';
	printf("result ft_:%s\n", ft_strrchr(s1, c));
	printf("result org:%s\n", strrchr(s1, c));
	return (0);
}
 */