/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:42:16 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 13:03:33 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	s;

	s = 0;
	if (dstsize == 0)
	{
		while (src[s] != '\0')
			s++;
		return (s);
	}
	while (src[s] != '\0' && s < (dstsize - 1))
	{
		dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	while (src[s] != '\0')
		s++;
	return (s);
}
/*
int	main(void)
{
	const char	src[] = "123456789";
	char	dest[] = "abckjgkhgcvmhjbkljjkm";
//	printf("%lu\n", ft_strlcpy(dest, src, 10));
	size_t	len = 15;
	int	t = ft_strlcpy(dest, src, len);
	printf("Copied %lu from %s to %s lenght %d", len, src, dest, t);
}*/
