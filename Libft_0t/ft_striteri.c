/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:37:24 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 14:02:59 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
extern void	trans(unsigned int idx, char *ch)
{
	*ch += idx;
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "000";
	ft_striteri(s, trans);
	printf("%s \n", s);

	return (0);
} */