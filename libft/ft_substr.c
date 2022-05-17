/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:39:25 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/16 18:27:45 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	void			*cpy;
	unsigned int	j;

	i = 0;
	while (i <= len)
	{
		i++;
	}
	cpy = malloc(i);
	if (cpy == 0)
		return (NULL);
	j = 0;
	i = start;
	while (start < i + len)
	{
		((char *)cpy)[j] = s[start];
		start++;
		j++;
	}
	return ((char *)cpy);
}

// int main()
// {
//     printf("%s\n", ft_substr("Return Teste", 4, 1));
// }