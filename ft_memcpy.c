/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:17:14 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/11 17:31:47 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dest;
	s = src;
	if ((len == 0) || (src == dest))
	{
		return (dest);
	}
	i = 0;
	while (i < len)
	{
		*d++ = *s++;
		i++;
	}
	return (dest);
}

// int main()
// {
//     char dst[] = "c'est vrai c'est un test";
//     char src[] = "This is a test";
//     printf("Pedrin: ");
//     printf("%s\n", ft_memcpy(dst, src, 5));
//     printf("Original: ");

// 	char dst2[] = "c'est vrai c'est un test";
//     char src2[] = "This is a test";
//     printf("%s\n", memcpy(dst2, src2, 5));

//     return (0);
// }
