/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:32:20 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/25 10:22:34 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length_count(int i)
{
	int	len;

	len = 0;
	if (i <= 0)
		len = 1;
	while (i)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int i)
{
	unsigned int	str_size;
	long int		n;
	char			*p;

	n = i;
	str_size = ft_length_count(n);
	p = (char *)malloc(str_size * sizeof(char) + 1);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		p[0] = '-';
	}
	p[str_size] = '\0';
	if (n == 0)
		p[str_size - 1] = n + '0';
	while (n)
	{
		str_size--;
		p[str_size] = (n % 10) + '0';
		n = n / 10;
	}
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i = +0;
// 	printf("%s\n", ft_itoa(i));
// 	// printf("%s\n", itoa(i));
// }