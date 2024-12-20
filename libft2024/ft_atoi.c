/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:52:00 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 17:13:32 by aalremei         ###   ########.fr       */
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
	int			a;

	i = 0;
	num = 0;
	a = 1;
	while (str[i] != '\0' && ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		a = check_sign((char *)str, i);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
		if (num * a < -2147483648)
			return (0);
		if (num * a > 2147483647)
			return (-1);
	}
	return (num * a);
}

// int	main(void)
// {
// 	char	str[] = "922337203684772809";
// 	char	str1[] = "922337203684772809";
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str1));
// }