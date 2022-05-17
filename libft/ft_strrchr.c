/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:41:46 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/13 16:33:41 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (((char *) str + i));
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	char str[] = "k Syden k stricker Alvares";
// 	int find = 'A';
// 	printf("%s\n", ft_strrchr(str, find));
// 	char str2[] = "k Skden k stricker Alvares";
// 	int find2 = 'A';
// 	printf("%s\n", strrchr(str2, find2));
// }
