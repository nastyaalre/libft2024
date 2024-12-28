/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:49:15 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/25 11:32:42 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in which
     dst and src might overlap should use memmove(3) instead.

     The memcpy() function returns the original value of dst.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
// 	char	src[] = "1234";
// 	char	dest[] = "abcdefghi";
// 	// printf("%s\n", memcpy(dest, src, 4));
// 	char	*p = ft_memcpy(dest, src, 3);
// 	printf("%s\n", p);
// }