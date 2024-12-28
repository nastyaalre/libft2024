/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:47:48 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/27 12:20:53 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s, const char *a, unsigned int i)
{
	unsigned int	b;
	unsigned char	*s1;
	unsigned char	*a1;

	b = 0;
	s1 = (unsigned char *)s;
	a1 = (unsigned char *)a;
	while ((s1[b] != '\0' || a1[b] != '\0') && b < i)
	{
		if (s1[b] != a1[b])
			return (s1[b] - a1[b]);
		b++;
	}
	return (0);
}

/*
int    main(void)
{
 char	str1[] = "";
 char	str2[] = "1234a6";
// printf("%d\n", strncmp(str1, str2, 4));
 printf("%d\n", ft_strncmp(str1, str2, 4));
}
*/