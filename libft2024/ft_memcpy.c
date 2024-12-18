/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:49:15 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/18 14:50:51 by aalremei         ###   ########.fr       */
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
		return (0);
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int    main(void)
// {
//  char	src[] = "1234";
//  char	dest[] = "abcdefg";
// 	printf("%s\n", memcpy(dest, src, 10));
// char	*p = ft_memcpy(dest, src, 6);
// 	printf("%s\n", p);
// }