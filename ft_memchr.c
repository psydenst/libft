/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:58:45 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/17 19:08:10 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = (const char *)s;
	i = 0;
	while (str[i] != '\0' && i <= n)
	{
		if (str[i] == c)
		{
			return ((((void *) str + i)));
		}
		i++;
	}
	return (NULL);
}

// int    main()
// {
// 	printf("%s\n", ft_memchr("\n", 'l', 400));
// 	printf("%s\n", memchr("\n", 'l', 400));
// }