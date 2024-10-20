/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:01:28 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/17 20:50:03 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* 
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char	str[10];
	size_t		i;
	
	ft_memset(str, 'a', sizeof(str));
	i = 0;
	while (i < sizeof(str))
	{
		printf("%3d ", str[i]);
		i++;
	}
	printf("\n");

	ft_bzero(str, 10);
	i = 0;
	while (i < sizeof(str))
	{
		printf("%3d ", str[i]);
		i++;
	}
	printf("\n");
	return (0);
}
 */