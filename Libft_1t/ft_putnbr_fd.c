/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 22:09:34 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 21:53:10 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	long long	n;
	char		res;

	n = (long long)num;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (10 <= n)
		ft_putnbr_fd(n / 10, fd);
	res = n % 10 + '0';
	write(fd, &res, 1);
}
