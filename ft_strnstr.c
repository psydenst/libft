/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:48:56 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/16 18:45:01 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	int		i;
	int		j;
	size_t	z;

	i = 0;
	j = 0;
	z = 0;
	if (neddle[j] == '\0')
		return (((char *)haystack));
	while (haystack[i] != '\0' && z < len)
	{
		while (haystack[i + j] == neddle[j] && haystack[i + j] != '\0')
		{
			j++;
			if (neddle[j] == '\0')
				return (((char *) haystack + i));
		}
			i++;
			z++;
			j = 0;
	}
	return (0);
}

// int    main()
// {
//     char str[] = "Eu sou uma\n\n I'm a bee";
//     char find[] = "I'm a bee";
// 	char str2[] = "Eu sou uma\n\n I'm a bee";
//     char find2[] = "I'm a bee";
//     printf("Original: %s\n", strnstr(str, find, 30));
// 	printf("Pedrin: %s\n", ft_strnstr(str2, find2, 30));
// } 