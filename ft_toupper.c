/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:26:02 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/05 14:52:23 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	converter;

	converter = 'a' - 'A';
	if ('a' <= c && c <= 'z')
		return (c - converter);
	return (c);
}
