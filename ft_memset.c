/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:32:56 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/11 18:08:58 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;

	i = 0;
	while (i < len)
	{
	((char *)b)[i] = c;
	i++;
	}
	return (b);
}

// int main()
// {
//     char b[] = "Valor";
//     int c = 'c';
//     size_t len = 1;
//     printf("Pedrin: %s\n", ft_memset(b, c, len));

// 	char b1[] = "Valor";
//     int c1 = 'c' ;
//     size_t len1 = 1;
// 	printf("Original: %s\n", memset(b1, c1, len1));
// }
