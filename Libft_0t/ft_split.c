/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:47:48 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/17 18:25:38 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_cnt(char const *s, char c)
{
	int	word_cnt;
	int	i;

	word_cnt = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c)
		word_cnt++;
	i = 1;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			word_cnt++;
		i++;
	}
	return (word_cnt);
}

static char	*ft_strdup_plus(const char *s, char c)
{
	char	*word;
	int		i;
	int		word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**check_leak(char **res, int word_cnt)
{
	int	i;
	int	j;

	i = 0;
	while (i < word_cnt)
	{
		if (res[i] == NULL)
		{
			j = 0;
			while (j < word_cnt)
			{
				free(res[j]);
				j++;
			}
			free(res);
			return (NULL);
		}
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_cnt;
	int		res_i;
	int		i;

	if (s == NULL)
		return (NULL);
	word_cnt = ft_word_cnt(s, c);
	res = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	res_i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			res[res_i++] = ft_strdup_plus(&s[i], c);
		while (s[i] && s[i] != c)
			i++;
	}
	res[res_i] = NULL;
	res = check_leak(res, word_cnt);
	return (res);
}
/* 
#include <stdio.h>

int	main(void)
{
	char const	*s;
	char		c;
	char		**res;
	int			i;

	s = "_as_df_";
	c = '_';
	res = ft_split(s, c);
	i = 0;
	while (res[i] != NULL)
	{
		printf("%s \n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
 */