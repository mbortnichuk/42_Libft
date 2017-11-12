/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:12:39 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/12 16:36:56 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list (*f)(t_list *elem))
{
	t_list *list;
	if (lst && f)
	{
		list = (t_list *)malloc(sizeof(f(list)));
		if (!list)
			return (NULL);
		list = f(lst);
		list->next = ft_lstmap(lst->next, f)
		return (list);
	}
	return (NULL);
}
