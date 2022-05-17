/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:27:55 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/17 18:46:15 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int word_counting(char *str, int c)
// {
// 	int i;
// 	int trigger; // a ideia do trigger é um cancelar a entrada do outro.
// 	while (*str)
// 	{
// 		if (*str != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			i++;
// 		}
// 		else if ( *str == c)
// 		{ 
// 			trigger = 0;
// 			*str++;
// 		}
// 	}
// }

// static char    *word_duplicate(char *  str, int start, int end)
// {
// 	char	*word;


// // essa função vai me entregar a cópia da string repartida. Int start é quando inicia o caracter diferente de start e int end é quando encontra o próximo delimitador. 
	
// 	return (word);
// }



// char    **ft_split(char const *s, char c)
// {
// 	char **split;
// 	size_t i;
// 	size_t j;
// 	int index;

// 	index = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && index < 0)
// 		index = i;
// 		else if ((s[i] == c ||i == ft_strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_duplicate(s, index, i);
// 			index = -1; // 
// 		}
// 	}
// }