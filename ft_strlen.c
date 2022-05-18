/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:05:59 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/11 19:38:36 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char	*s;
// 	s = "Two forty  ";
// 	printf("%zu\n", ft_strlen(s));

// 	char	*s2;
// 	s2 = "Two forty  ";
// 	printf("%zu\n", strlen(s));
// }
