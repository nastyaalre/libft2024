/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <aalremei@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:14:41 by aalremei          #+#    #+#             */
/*   Updated: 2024/12/27 12:19:10 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*p;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
		p[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		p[j++] = s2[i++];
	p[j] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	*s1a = "where is my ";
	char	*re = ft_strjoin(s1a, NULL);
		printf("%s\n", re);


	// char *s1 = "my favorite animal is";
	// char *s2 = " ";
	// char *s3 = "the nyancat";
	// char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	// printf("%s\n", res);
	return (0);
}*/