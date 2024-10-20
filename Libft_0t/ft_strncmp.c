/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:39:19 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/05 13:17:33 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int n = 13;
	const char *s1 = "0223446748";
	const char *s2 = "0223446788";
	int res1 = ft_strncmp(s1, s2, n);
	int res2 = strncmp(s1, s2, n);
	printf("%d\n%d", res1, res2);
	return 0; 
}
 */
