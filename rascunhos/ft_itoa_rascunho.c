/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:23:16 by psydenst          #+#    #+#             */
/*   Updated: 2022/05/18 18:16:47 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int sizeof_n(int n)
{
	int i;

	i = 0;
	while(n != 0)
	{
		n = n / 10;
		i++;
	}
	return ((i + 1) * sizeof(char));
}

char    *receive_numbers(int k)
{
	char *reverse_joker;
	int j;
	int a;
	// int b;
	if (k < 0)
	{
		k = k * -1;
	}
	reverse_joker = malloc(sizeof_n(k + 1) * sizeof(char));
	a = 0;
	while (k != 0)
	{
		j = k % 10;
		reverse_joker[a] = j + '0';
		a++;
		k = k / 10;
	}
	reverse_joker[a] = '\0';
	return (reverse_joker);
}

char	*reverse_of_reverse(char * itoa_reverse)
{
	char * itoa;
	int i;
	int a;

	i = 0;
	a = 0;
	while (itoa_reverse)
		i++;
	while (i != 0)
	{
		itoa[a] = itoa_reverse[i];
		a++;
		i--;
	}
	itoa[a] = '\0';
	return (itoa);
}

char    *ft_itoa(int n)
{
	char    *itoa_reverse;
	char	*itoa;
	int a;

	itoa = malloc(sizeof_n(n));
	itoa_reverse = receive_numbers(n);
	a = 0;
	while (itoa[a] != '\0')
	{
		if(n < 0)
		itoa_reverse[a] = '-';
		a++;
	}	
	return (itoa_reverse);
}

int main()
{
	printf("%s\n", reverse_of_reverse("001"));
}