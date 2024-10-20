/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:58:49 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/01 20:02:20 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ('0' <= c && c <= '9')
		return (8);
	if ('A' <= c && c <= 'Z')
		return (8);
	if ('a' <= c && c <= 'z')
		return (8);
	return (0);
}
/* 
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c;

	c = '0';

	printf("%d \n", ft_isalnum(c));
	printf("%d \n", isalnum(c));
}
 */