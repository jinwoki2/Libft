/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:30:19 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/16 21:36:29 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int i, const char *nptr)
{
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	return (i);
}

static int	ft_check_sign(int i, const char *nptr, int *ptr_sign)
{
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			*ptr_sign *= -1;
		return (++i);
	}
	if ('0' <= nptr[i] && nptr[i] <= '9')
		return (i);
	return (-1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	i = ft_isspace(i, nptr);
	i = ft_check_sign(i, nptr, &sign);
	if (i == -1)
		return (0);
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
