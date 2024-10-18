/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:30:52 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 13:52:08 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*result;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	str = (char *)s + start;
	if (ft_strlen(str) < len)
		len = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, str, len + 1);
	return (result);
}
/* 
#include <stdio.h>

int	main(void)
{
	char *str = "hola";
	char *dest;
	
	dest = ft_substr(str, 3, 4);
	printf("%s \n", dest);

	return 0;
}
 */