/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:22:21 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/16 21:38:33 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(struct s_list));
	if (new == NULL)
		return (NULL);
	(*new).content = content;
	new->next = NULL;
	return (new);
}

/* 
#include <stdio.h>
int	main(void)
{
	t_list	*node;
	char	*content;

	content = "hello, world!";
	node = ft_lstnew(content);

	printf("%s \n", (char *)(*node).content);
	printf("%p \n", node->next);
	return 0;
}
 */