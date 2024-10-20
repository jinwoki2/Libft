/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:58:27 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/01 21:02:02 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
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

	c = 0;

	printf("%d \n", isascii(c));
	printf("%d \n", ft_isascii(c));

	return (0);
}
 */