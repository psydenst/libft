/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:50:38 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/11 17:32:49 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s) + 1;
	new = malloc (len);
	if (new == NULL)
		return (NULL);
	return ((char *) ft_memcpy(new, s, len));
}

// int main()
// {
// 	printf("%s\n", strdup("Teste"));
// 	printf("%s\n", ft_strdup("Teste"));
// }