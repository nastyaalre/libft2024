/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:52:00 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 14:28:56 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(const char *str, int r)
{
	int	a;

	a = 1;
	if (str[r] == '-')
		a = -1;
	return (a);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	num;
	int			sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] != '\0' && ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = check_sign(str, i);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "2147483649";
// 	char	str1[] = "2147483649";
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str1));
// }