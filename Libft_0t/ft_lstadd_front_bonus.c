/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:58:17 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/14 20:14:42 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* 
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	**lst;
	t_list	*new;

	head = NULL;
	new = ft_lstnew("world");
	lst = &head;
	ft_lstadd_front(lst, new);
	printf("%s \n", (char *)(*(*lst)).content);
	return (0);
}
 */