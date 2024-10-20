/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:03:20 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/16 21:38:38 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL)
		return ;
	temp = *lst;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/*
void	delete(void	*content)
{
	free(content);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list	**lst;
	t_list	*head;
	t_list	*mid;
	t_list	*tail;
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = (char *)malloc(sizeof(char) * 6);
	str2 = (char *)malloc(sizeof(char) * 6);
	str3 = (char *)malloc(sizeof(char) * 6);
	strcpy(str1, "hello");
	strcpy(str2, "world");
	strcpy(str3, "boy");
	head = ft_lstnew(str1);
	mid	= ft_lstnew(str2);
	tail = ft_lstnew(str3);
	head->next = mid;
	mid->next = tail;
	printf("%s \n", str1);
	printf("%s \n", (char *)head->content);
	lst = &head;
	ft_lstclear(lst, delete);
	return (0);
}
 */