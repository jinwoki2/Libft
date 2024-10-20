/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:58:49 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 21:50:41 by jinwoki2         ###   ########.fr       */
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
