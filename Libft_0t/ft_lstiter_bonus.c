/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:47:38 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/16 21:38:36 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* 
#include <stdio.h>
#include <string.h>
void	trans_a(void *content)
{
	strcpy((char *)content, "a");
}


int main(void)
{
	char	*str1 = (char *)(malloc)(sizeof(char) * 2);
	char	*str2 = (char *)(malloc)(sizeof(char) * 2);
	char	*str3 = (char *)(malloc)(sizeof(char) * 2);
	strcpy(str1, "A");
	strcpy(str2, "B");
	strcpy(str3, "C");

	t_list *head = ft_lstnew(str1);
	t_list *mid = ft_lstnew(str2);
	t_list *tail = ft_lstnew(str3);
	t_list	*lst;

	head->next = mid;
	mid->next = tail;

	lst = head;
	while (lst != NULL)
	{
		printf("%s \n", (char *)lst->content);
		lst = lst->next;
	}

	lst = head;
	ft_lstiter(lst, trans_a);

	while (lst != NULL)
	{
		printf("%s \n", (char *)lst->content);
		lst = lst->next;
	}
	return 0;
} */