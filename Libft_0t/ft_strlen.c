/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:27:16 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/05 13:27:19 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "0123456789";
	printf("%ld \n", ft_strlen(str));
	printf("%ld \n", strlen(str));
	
	return 0;
}
 */