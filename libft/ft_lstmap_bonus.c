/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberay <jberay@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:10:15 by jberay            #+#    #+#             */
/*   Updated: 2023/11/02 14:10:17 by jberay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	if (lst)
	{
		head = NULL;
		while (lst)
		{
			temp = ft_lstnew(f(lst->content));
			if (!temp)
				ft_lstclear(&temp, del);
			ft_lstadd_back(&head, temp);
			lst = lst->next;
		}
		return (head);
	}
	return (NULL);
}
