/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:42:16 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/16 21:38:43 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search_little(const char *b, size_t i, const char *l, size_t len)
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
			if (search_little(big, i, little, len))
				return (result + i);
		}
		i++;
		len--;
	}
	return (NULL);
}

/* 
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char 	*big = "asdf42gsasdf";
	char 	*yes_little = "42gs";
	char 	*no_little = "sg24";
	char 	*empty = "";
	size_t 	len = 10;
	size_t	less_len = 5;

	char *result_yes_ft_ = ft_strnstr(big, yes_little, len);
	char *result_yes_org = strnstr(big, yes_little, len);

	char *result_no_ft_ = ft_strnstr(big, no_little, len);
	char *result_no_org = strnstr(big, no_little, len);

	char *result_empty_ft_ = ft_strnstr(big, empty, len);
	char *result_empty_org = strnstr(big, empty, len);
	
	char *result_zero_ft_ = ft_strnstr(big, yes_little, 0);
	char *result_zero_org = strnstr(big, yes_little, 0);

	char *result_less_ft_ = ft_strnstr(big, yes_little, less_len);
	char *result_less_org = strnstr(big, yes_little, less_len);

	printf("result_yes_ft_: %s\n", result_yes_ft_);
	printf("result_yes_org: %s\n", result_yes_org);
	printf("-------------------------\n");
	printf("result_no_ft_: %s\n", result_no_ft_);
	printf("result_no_org: %s\n", result_no_org);
	printf("-------------------------\n");	
	printf("result_empty_ft_: %s\n", result_empty_ft_);
	printf("result_empty_org: %s\n", result_empty_org);
	printf("-------------------------\n");	
	printf("result_zero_ft_: %s\n", result_zero_ft_);
	printf("result_zero_org: %s\n", result_zero_org);
	printf("-------------------------\n");	
	printf("result_less_ft_: %s\n", result_less_ft_);
	printf("result_less_org: %s\n", result_less_org);

	return 0;
}
 */