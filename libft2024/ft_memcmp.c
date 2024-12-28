/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:40:48 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/25 10:58:39 by aalremei         ###   ########.fr       */
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

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (len--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//  char	str[] = "dskfjsf5678sij";
//  char	str1[] = "dskfjsf5678sij";
//  printf("%d\n", memcmp(str, str1, 15));

//  char	stra[] = "dskfjsf5678sij";
//  char	strb[] = "dskfjsf5678sij";
//  printf("%d\n", ft_memcmp(str, str1, 15));
//  return (0);
// }
