/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:51:31 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/20 17:09:45 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_findchar(const char *str, int i)
{
	int	b;

	b = 0;
	while (str[b] != i && str[b] != '\0')
	{
		b++;
	}
	if (str[b] == i)
		return ((char *)&str[b]);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*p;
	char		*t;
	const char	*temp;
	int			counter;
	int			a;

	counter = 0;
	a = 0;
	if (!s1 || !set)
		return (NULL);
	p = &s1[ft_strlen(s1) - 1];
	while (s1[a] != '\0' && ft_findchar(set, s1[a]))
		a++;
	if (s1[a] == '\0')
	{
		t = (char *)malloc(1);
		*t = '\0';
		return (t);
	}
	while (ft_findchar(set, *p))
		p--;
	temp = &s1[a];
	while (temp++ != p + 1)
		counter++;
	return (ft_substr(s1, a, counter));
}
/*
int main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1, " \n\t");

	printf ("%d\n", strcmp(ret, s2));
    printf("%s\n", ret);
}*/