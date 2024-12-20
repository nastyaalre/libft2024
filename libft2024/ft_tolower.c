/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:52:33 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 17:09:52 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*
int	main(void)
{
	char	c;

	c = 'F';
//	printf("From '%c' to new '%c'", c, tolower(c));
	printf("From '%c' to new '%c'", c, ft_tolower(c));
}
*/