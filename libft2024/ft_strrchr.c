/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:50:49 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/27 12:15:28 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int i)
{
	int	b;

	b = ft_strlen(str);
	while (b >= 0)
	{
		if (((unsigned char *)str)[b] == (unsigned char)i)
			return ((char *)&str[b]);
		b--;
	}
	return (NULL);
}

// int    main(void)
// {
//     char    str[] = "bonjour";
//     char    *p = ft_strrchr(str, 's');
//     printf("%s\n", p);

// 	    char    str1[] = "bonjour";
//     char    *q = strrchr(str1, 's');
//     printf("%s\n", q);
// }