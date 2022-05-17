/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:12:09 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/16 18:17:23 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	joker;
	char *jokersrc;
	char *jokerdst;

	jokersrc = (char *)src;
	jokerdst = dst;
	a = 0;
	b = 0;
	while (dst[a] != '\0')
		a++;
	joker = a;
	while (src[b] != '\0' && (joker + b) < dstsize)
		dst[a++] = src[b++];
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}

// int main(void)
// {
// 	char dst[] = "Are we";
// 	const char src[] = "xtogether?";
//     printf("%s\n", src);
//     printf("%s\n", dst);
// 	printf("Pedrin: %zu\n", ft_strlcat(dst, src, 8));
// 	printf("%s\n", dst);

// 	char dst2[20] = "Are we";
// 	const char src2[] = "xtogether?";
//     printf("%s\n", src2);
//     printf("%s\n", dst2);
// 	printf("Original: %zu\n", strlcat(dst2, src2, 8));
//     printf("%s\n", dst2);
// 	return (0);
// }