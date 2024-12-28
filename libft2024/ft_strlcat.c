/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:38:32 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 13:03:25 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (dest == NULL && dstsize == 0)
		return (s_len);
	d_len = ft_strlen(dest);
	i = 0;
	if (dstsize < d_len + 1)
		return (dstsize + s_len);
	if (dstsize > d_len + 1)
	{
		while (src[i] != '\0' && (d_len + 1 + i) < dstsize)
		{
			dest[d_len + i] = src[i];
			i++;
		}
	}
	dest[d_len + i] = '\0';
	return (s_len + d_len);
}

// int	main(void)
// {
// 	const char	src[] = "lorem";
// 	char	dest[11] = "a";
// 	printf("%lu\n", ft_strlcat(dest, src, 6));
// 	const char	src1[] = "lorem";
// 	char	dest1[11] = "a";
// 	printf("%lu\n", strlcat(dest1, src1, 6));
// }