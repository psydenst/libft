/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:12:25 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/17 12:37:59 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	nb;
	void	*p;
	char	*q;

	nb = count * size;
	p = malloc(nb);
	q = (void *)p;
	i = 0;
	if (q == 0)
		return (NULL);
	while (i <= nb)
	{
		*q++ = '\0';
		i++;
	}
	return (p);
}

// int main()
// {
//     char *p = ft_calloc(50, sizeof(char));
//     printf("%s\n", p);
//     free(p);
// }