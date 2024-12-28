/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:16:51 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 14:12:39 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
// {
// 	t_list	*new;
// 	t_list	*start_new;

// 	new = NULL;
// 	start_new = NULL;
// 	if (!lst || !f || !del)
// 		return (NULL);
// 	while (lst)
// 	{
// 		new = ft_lstnew(f(lst -> content));
// 		if (!new)
// 		{
// 			ft_lstclear(&start_new, del);
// 			return (start_new);
// 		}
// 		ft_lstadd_back(&start_new, new);
// 		lst = lst ->next;
// 	}
// 	return (start_new);
// }
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start_new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	start_new = NULL;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&start_new, del);
			return (NULL);
		}
		ft_lstadd_back(&start_new, new);
		lst = lst->next;
	}
	return (start_new);
}
