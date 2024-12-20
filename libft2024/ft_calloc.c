/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:00:40 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 18:21:39 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The calloc() function contiguously allocates enough space for count objects 
that are size bytes of memory each and returns a pointer to the allocated 
memory.  The allocated memory is filled with bytes of value zero.*/

#include "libft.h"

void	*ft_calloc(size_t i, size_t size)
{
	void			*p;

	if (size && SIZE_MAX / size < i)
		return (NULL);
	p = malloc(i * size);
	if (!p)
		return (NULL);
	ft_bzero(p, i * size);
	return (p);
}

// int	main(void)
// {
// 	int i;
// 	i = 0;
// 	char *str = ft_calloc(56, 20);
// 	while (i <= 20)
// 	{
// 		str[i] = i;
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// }