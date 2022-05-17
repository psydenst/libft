/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:37:26 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/16 15:40:57 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*p;
	size_t	a;
	size_t	b;

	p = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (p == 0)
		return (NULL);
	a = 0;
	b = 0;
	while (a <= ft_strlen(s1))
	{
		((char *)p)[a] = s1[a];
		a++;
	}
	while (a <= ft_strlen(s1) + ft_strlen(s2))
	{
		((char *)p)[a - 1] = s2[b];
		a++;
		b++;
	}
	return ((char *)p);
}

// int main()
// {
// 	printf("%s\n", ft_strjoin("o_teste_", "Olha"));
// }