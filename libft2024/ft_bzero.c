/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:54:51 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/18 13:55:01 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*bzero -- write zeroes to a byte string.
The bzero() function writes n zeroed bytes to the string s. 
If n is zero, bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	size_t	a;
	char	*s;

	a = 0;
	s = str;
	while (a < len)
	{
		s[a] = '\0';
		a++;
	}
}
/*
int	main(void)
{
	char	str[] = "";
	ft_bzero(str, 3);
//	printf("%s\n", ft_bzero(str, 3));
	return (0);
}*/