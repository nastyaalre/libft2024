/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:43:15 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 13:03:39 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != 0)
		count ++;
	return (count);
}

/*
int	main(void)
{
	char	str[] = "12684653";
//	printf("%lu\n", strlen(str));
	printf("%zu\n", ft_strlen(str));

}
*/