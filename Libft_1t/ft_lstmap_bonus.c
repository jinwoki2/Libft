/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:38:50 by jinwoki2          #+#    #+#             */
/*   Updated: 2024/10/18 21:43:26 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_clean(t_list *new_list, void (*del)(void *))
{
	ft_lstclear(&new_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	**new_ptr;
	void	*fcont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	new_ptr = &new_list;
	while (lst != NULL)
	{
		fcont = f(lst->content);
		if (fcont == NULL)
			return (ft_clean(new_list, del));
		*new_ptr = ft_lstnew(fcont);
		if (*new_ptr == NULL)
		{
			del(fcont);
			return (ft_clean(new_list, del));
		}
		new_ptr = &((*new_ptr)->next);
		lst = lst->next;
	}
	return (new_list);
}
