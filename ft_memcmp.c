/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:06:57 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/12 12:58:08 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		d;
	char	*src1;
	char	*src2;

	src1 = (char *)s1;
	src2 = (char *)s2;
	i = 0;
	d = 0;
	while ((src1[i] != '\0' || src2[i] != '\0') && i < n)
	{
		if (src1[i] != src2[i])
		{
			d = src1[i] - src2[i];
			return (d);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	printf("Original: %d\n", memcmp("Olgatt", "Olgata", 6));
// 	printf("Pedrin: %d\n", ft_memcmp("Olgatt", "Olgata", 6));
// }