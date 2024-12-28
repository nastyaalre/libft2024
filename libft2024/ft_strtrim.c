/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:51:31 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/24 14:05:05 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_findchar(const char *str, int i)
{
	int	b;

	b = 0;
	while (str[b] != i && str[b] != '\0')
		b++;
	if (str[b] == i)
		return ((char *)&str[b]);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*t;
	int			start;
	int			end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_findchar(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_substr("", 0, 0));
	end = ft_strlen(s1) - 1;
	while (end > start && ft_findchar(set, s1[end]))
		end--;
	t = ft_substr(s1, start, end - start + 1);
	return (t);
}

// int main(void)
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
// 	char *s2 = "";
// 	char *ret = ft_strtrim(s1, " \n\t");

// 	printf ("%d\n", strcmp(ret, s2));
//     printf("%s\n", ret);
// }