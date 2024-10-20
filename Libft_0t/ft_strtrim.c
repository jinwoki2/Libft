/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:51:24 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 15:59:13 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_search_first(char const *s, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s[i])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (s[i]);
		i++;
	}
	return ('\0');
}

static char	ft_search_last_idx(char *s_eli_head, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s_eli_head) - 1;
	while (i != -1)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s_eli_head[i])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i + 1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	first;
	char	*s_eli_head;
	int		last_idx;
	char	*result;

	if (s == NULL || set == NULL)
		return (NULL);
	first = ft_search_first(s, set);
	if (first == '\0')
		return (ft_strdup(""));
	s_eli_head = ft_strchr(s, first);
	last_idx = ft_search_last_idx(s_eli_head, set);
	result = (char *)malloc(sizeof(char) * (last_idx + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s_eli_head, last_idx + 1);
	return (result);
}

/* 
#include <stdio.h>
int	main(void)
{
	char const	*set = "ea0";
	char const	*s = "eateste0";
	char		*res;

	res = ft_strtrim(s, set);
	printf("%s \n", res);
	return 0;
}
 */