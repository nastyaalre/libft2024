/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:56:18 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/25 12:13:05 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   The memmove() function copies len bytes from string src to string dst.  The
     two strings may overlap; the copy is always done in a non-destructive man-
     ner.
     The memmove() function returns the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == 0 && s == 0)
		return (NULL);
	if (d < s)
	{
		while (len-- > 0)
			*d++ = *s++;
		return (dest);
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
// char    src[] = "abcdefg";
// printf("%s\n", memmove(&src[2], &src[0], 3));

// char    src1[] = "abcdefg";
//     printf("%s\n", ft_memmove(&src1[2], &src1[0], 3));
// }