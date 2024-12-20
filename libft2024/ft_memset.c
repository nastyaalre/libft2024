#include <stddef.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:06:51 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 15:09:45 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function writes len bytes of value c (converted to an unsigned
     char) to the string b.
     The memset() function returns its first argument.*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	a;

	a = 0;
	while (a < len)
	{
		((unsigned char *)str)[a] = c;
		a++;
	}
	return (str);
}
/*

int    main(void)
{
 char	str1[21] = "";
 
// printf("%s\n", memset(str1, 62, 20));
	char	*p = ft_memset(str1, 62, 5);
	printf("%s\n", p);
}*/