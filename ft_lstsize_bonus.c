/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:17:05 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/16 21:38:32 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cur;

	if (lst == NULL)
		return (0);
	cur = lst;
	i = 1;
	while (cur->next != NULL)
	{
		cur = cur->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*mid;
	t_list	*tail;
	int		size;

	head = ft_lstnew("A");
	mid = ft_lstnew("B");
	tail = ft_lstnew("C");
	size = 0;
	head->next = mid;
	mid->next = tail;
	size = ft_lstsize(head);
	printf("%d \n", size);
	return (0);
}
 */