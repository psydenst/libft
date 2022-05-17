/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:03:20 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/17 18:56:06 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 0x20 && c <= 0x7e)
		return (1);
	else
		return (0);
}

// int main ()
// {
//     printf("%d\n", ft_isprint('0'));
//     printf("%d\n", isprint('0'));
// }