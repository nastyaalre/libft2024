/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:17:19 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 13:17:26 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list -> content = content;
	new_list -> next = NULL;
	return (new_list);
}

// int main (void)
// {
// 	t_list *b;
// 	b = ft_lstnew("blabla");
// 	printf("%s\n", b -> content);
// 	printf("%p\n", b -> next);
// 	printf("%s\n", (*b).content);
// 	printf("%p\n", (*b).next);
// 	return (0);
// }