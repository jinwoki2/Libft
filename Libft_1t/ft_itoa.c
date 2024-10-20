/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:57:41 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 21:51:04 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_result_allocation(int digit, int org)
{
	char	*pre_res;

	if (org < 0)
	{
		pre_res = (char *)malloc(sizeof(char) * digit + 2);
		if (pre_res == NULL)
			return (NULL);
	}
	else
	{
		pre_res = (char *)malloc(sizeof(char) * digit + 1);
		if (pre_res == NULL)
			return (NULL);
	}
	return (pre_res);
}

static char	*ft_putnbr_rev(long long n, int digit, int org, char *res)
{
	int	mod;
	int	i;

	if (org < 0)
	{
		i = digit;
		res[0] = '-';
		res[digit + 1] = '\0';
	}
	else
	{
		i = digit - 1;
		res[digit] = '\0';
	}
	if (n == 0)
		res[0] = '0';
	while (n)
	{
		mod = n % 10 + '0';
		res[i--] = mod;
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int num)
{
	long long	n;
	int			digit;
	char		*res;
	int			org;

	n = (long long)num;
	org = num;
	if (n < 0)
		n *= -1;
	digit = ft_count_digits(n);
	res = ft_result_allocation(digit, org);
	if (res == NULL)
		return (NULL);
	res = ft_putnbr_rev(n, digit, org, res);
	return (res);
}
