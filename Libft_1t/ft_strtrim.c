/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:24:53 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/20 21:24:58 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search_first_idx(char const *s, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

static int	ft_search_last_idx(char const *s, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s[i])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		first_idx;
	int		last_idx;
	char	*result;

	if (s == NULL || set == NULL)
		return (NULL);
	first_idx = ft_search_first_idx(s, set);
	last_idx = ft_search_last_idx(s, set);
	if (first_idx > last_idx)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (last_idx - first_idx + 2));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s[first_idx], last_idx - first_idx + 2);
	return (result);
}

#include <stdio.h>
int main(void)
{
	char	*str = "avc";
	char	*set = "!@#";
	char	*res;

	res = ft_strtrim(str, set);
	printf("%s \n", res);

	return 0;
}