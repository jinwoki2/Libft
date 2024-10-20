/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:54:03 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/05 14:54:24 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	converter;

	converter = 'a' - 'A';
	if ('A' <= c && c <= 'Z')
		return (c + converter);
	return (c);
}
