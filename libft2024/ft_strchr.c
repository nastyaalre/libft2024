/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:02:28 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 17:04:45 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)i)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)i == '\0')
		return ((char *)str);
	return (NULL);
}

// int	main(void)
// {
// 	char	src[] = "tripouille";
// char	*p = strchr(src, 'z');
// 	printf("%s\n", p);
// 	char	src1[] = "tripouille";
// char	*q = ft_strchr(src1, 'z');
// 	printf("%s\n", q);
// }