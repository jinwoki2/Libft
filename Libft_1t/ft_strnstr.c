/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:42:16 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 21:56:16 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search_little(const char *b, size_t i, const char *l, size_t len)
{
	const char	*big;
	const char	*little;
	size_t		j;

	big = b;
	little = l;
	j = 0;
	while (little[j] && len)
	{
		if (big[i] != little[j])
			return (0);
		i++;
		j++;
		len--;
	}
	if (len == 0 && little[j] != '\0')
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*result;
	size_t	i;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	result = (char *)big;
	i = 0;
	while (big[i] && len)
	{
		if (big[i] == little[0])
		{
			if (ft_search_little(big, i, little, len))
				return (result + i);
		}
		i++;
		len--;
	}
	return (NULL);
}
