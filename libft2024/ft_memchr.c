/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:34:25 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 17:08:20 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.
	The memchr() function returns a pointer to the byte located, or NULL if no
     such byte exists within n bytes.*/

#include "libft.h"

void	*ft_memchr(const void *str, int cr, size_t len)
{
	unsigned char	*p;
	unsigned char	chr;
	size_t			a;

	p = (unsigned char *)str;
	chr = (unsigned char) cr;
	a = 0;
	while (a < len)
	{
		if (*p == chr)
			return (p);
		a++;
		p++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//  char	str[] = "dskfjsf567\08sipoklm)oiefjknesd1";
//  printf("%s\n", memchr(str, 112, 26));
//  char	str1[] = "dskfjsf567\08sipoklm)oiefjknesd1";
//  char	*p = ft_memchr(str1, 112, 26);
//  printf("%s\n", p);
//  return (0);
// }
