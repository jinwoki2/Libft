/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:08:01 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 17:55:13 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*allclear(t_list *new_list, void (*del)(void *))
{
	ft_lstclear(&new_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*fcont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		fcont = f(lst->content);
		if (fcont == NULL)
			return (allclear(new_list, del));
		new_node = ft_lstnew(fcont);
		if (new_node == NULL)
		{
			del(fcont);
			return (allclear(new_list, del));
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>
#include <string.h>

void	*f(void *content)
{
	return (strcpy((char *)content, "B"));
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	char	*str;
	t_list	*head;
	t_list	*mid;
	t_list	*tail;
	t_list	*new;

	str = (char *)malloc(sizeof(char) * 2);
	strcpy(str, "A");
	head = ft_lstnew(str);
	mid = ft_lstnew(str);
	tail = ft_lstnew(str);
	head->next = mid;
	mid->next = tail;
	new = ft_lstmap(head, f, del);
	printf("%s \n", (char *)(new->next)->content);
	return (0);
}
 */