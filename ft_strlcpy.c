/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:25:29 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/13 16:22:29 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j] != '\0')
		j++;
	if (dstsize == 0)
		return (j);
	i = 0;
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

// int main()
// {
//     char str[] = "Bytes______";
//     char dest[20] = "";
// 	printf("Pedrin:\n");
// 	printf("%s\n", dest);
//     printf("%s\n", str);
//     printf("%zu\n", ft_strlcpy(dest, str, 15));
//     printf("%s\n", dest);
// 	printf("\n\n");
// 	char str2[] = "Bytes______";
//     char dest2[20] = "";
// 	printf("Original:\n");
// 	printf("%s\n", dest2);
// 	printf("%s\n", str2);
//     printf("%zu\n", strlcpy(dest2, str2, 15));
//     printf("%s\n", dest2);
//     return (0);
// }