/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:48:11 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/17 19:52:59 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

/* 
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int c;

	c = 'B';

	printf("%d \n", ft_isalpha(c));
	printf("%d \n", isalpha(c));

	return (0);
}
 */