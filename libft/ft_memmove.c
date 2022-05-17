/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:59:37 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/11 18:14:50 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dest;
	s = src;
	if (ft_strlen(d) < ft_strlen(s))
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
		*lastd-- = *lasts--;
	}
	return (dest);
}

// int main()
// {
//     char dst[300] = "c'est vrai c'est un test";
//     char src[] = "This is a test-------------------";
//     printf("Pedrin: ");
//     printf("%s\n", ft_memmove(dst, src, 0));
//     printf("Original: ");

// 	char dst2[300] = "c'est vrai c'est un test";
//     char src2[] = "This is a test-------------------";
//     printf("%s\n", memmove(dst2, src2, 0));

//     return (0);
// }