/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:31:51 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 15:44:35 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "?";
	char	*dest1;
	char	*dest2;
	dest1 = ft_strdup(str);
	dest2 = strdup(str);
	printf("%s \n", dest1);
	printf("%s \n", dest2);

	return 0;
}
 */