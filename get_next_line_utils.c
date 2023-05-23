/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:27:28 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/16 15:40:15 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	size_t	a;
	size_t	b;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	p = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!p)
		return (NULL);
	a = -1;
	b = 0;
	if (s1)
		while (s1[++a] != '\0')
			p[a] = s1[a];
	while (s2[b] != '\0')
		p[a++] = s2[b++];
	p[a] = '\0';
	free (s1);
	return (p);
}

char	*ft_strchr(char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (0);
}
