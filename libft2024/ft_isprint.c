/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:07:04 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/18 14:07:07 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int p)
{
	if (p >= 32 && p <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	c = 125;
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
}
*/