/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:54:51 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 14:39:39 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*bzero -- write zeroes to a byte string.
The bzero() function writes n zeroed bytes to the string s. 
If n is zero, bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	size_t	ind;

	ind = 0;
	while (ind < len)
	{
		((char *)str)[ind] = '\0';
		ind++;
	}
}
