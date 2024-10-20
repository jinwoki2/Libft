/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:48:16 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/17 19:54:00 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

/* 
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int c;

	c = '0';

	printf("%d \n", ft_isdigit(c));
	printf("%d \n", isdigit(c));

	return (0);
}
 */