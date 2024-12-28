/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:34:25 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/25 10:45:16 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.
	The memchr() function returns a pointer to the byte located, or NULL if no
     such byte exists within n bytes.*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	chr;

	p = (unsigned char *)str;
	chr = (unsigned char) c;
	while (len--)
	{
		if (*p == chr)
			return (p);
		p++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//  char	str[] = "dskfjsf567\06sipoklm)oiefjknesd1";
//  printf("%s\n", memchr(str, 0, 35));
//  char	str1[] = "dskfjsf567\06sipoklm)oiefjknesd1";
//  char	*p = ft_memchr(str1, 0, 35);
//  printf("%s\n", p);
//  return (0);
// }
