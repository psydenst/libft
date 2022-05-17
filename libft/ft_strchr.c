/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:55:11 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/12 12:21:46 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((((char *) str + i)));
			i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int    main()
// {
// 	char str[] = "I'm a bee, I'm a bee bee bee bee";
// 	int find = 'b';
// 	printf("%s\n", ft_strchr(str, find));
// 	char str2[] = "I'm a bee, I'm a bee bee bee bee";
// 	int find2 = 'b';
// 	printf("%s\n", strchr(str2, find2));
// }
