/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:24:25 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/11 18:12:38 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*joker;

	joker = (char *)s;
	i = 0;
	while (i < n)
	{
		joker[i] = '\0';
		i++;
	}
}

// int main()
// {
//     int i;
//     char s[10] = "teste aí";
//     ft_bzero(s, 5);
// 	printf("Pedrin: \n");
//     i = 0;
//     while(i < 10)
//     {
//         printf("%i\n", s[i]);    
//         i++;
//     }

// 	int i2;
//     char s2[10] = "teste aí";
//     printf("\n\n");
// 	printf("Original: \n");
//     bzero(s2, 5);
//      i2 = 0;
//     while(i2 < 10)
//     {
//         printf("%i\n", s2[i2]);    
//         i2++;
//     }
// }