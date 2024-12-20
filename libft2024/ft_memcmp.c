/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:40:48 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 17:08:33 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   The memcmp() function compares byte string str1 against byte string str2. 
	Both strings are assumed to be len bytes long.

     The memcmp() function returns zero if the two strings are identical, other-
     wise returns the difference between the first two differing bytes (treated
     as unsigned char values, so that `\200' is greater than `\0', for example).
     Zero-length strings are always identical.   */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			b;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	b = 0;
	while (b < len)
	{
		if (*s1 == *s2 && b < len)
		{
			b++;
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}

// int    main(void)
// {
//  char	str[] = "dskfjsf5678sij";
//  char	str1[] = "dskfjsf5678sijknesd1";
//  printf("%d\n", memcmp(str, str1, 31));

//  char	stra[] = "dskfjsf5678sij";
//  char	strb[] = "dskfjsf5678sijknesd1";
//  printf("%d\n", ft_memcmp(stra, strb, 31));
//  return (0);
// }
