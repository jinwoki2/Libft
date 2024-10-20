/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:06:47 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/05 13:33:13 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
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

	c = 127;
	
	printf("%d \n", !!ft_isprint(c));
	printf("%d \n", !!isprint(c));

	return 0;
}
 */