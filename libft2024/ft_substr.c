/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:52:18 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 13:27:53 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.
Return value The substring.
NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	a;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		a = 0;
	else if (start + len > s_len)
		a = s_len - start;
	else
		a = len;
	p = (char *)malloc((a + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < a)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char *str = "42";
// 	char *ret = ft_substr(str, 0, 0);

// 	printf("%s\n", ret);
// 	return (0);
// }