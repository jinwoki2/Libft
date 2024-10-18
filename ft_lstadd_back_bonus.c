/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:34:31 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/16 21:38:39 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	cur = ft_lstlast(*lst);
	cur->next = new;
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	**lst;
	t_list	*new;
	t_list	*head;
	t_list	*mid;
	t_list	*tail;

	lst = &head;
	new = ft_lstnew("!!!");
	head = ft_lstnew("hello");
	mid	= ft_lstnew("my");
	tail = ft_lstnew("world");
	head->next = mid;
	mid->next = tail;
	printf("%s \n", (char *)(tail->content));
	ft_lstadd_back(lst, new);
	printf("%s \n", (char *)(tail->next)->content);
	return (0);
}
 */