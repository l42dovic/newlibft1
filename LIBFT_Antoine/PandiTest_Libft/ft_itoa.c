/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:49:10 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/21 21:45:55 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

static void	reverse(char *nbr, size_t size)
{
	char	tmp;
	size_t	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = nbr[i];
		nbr[i] = nbr[size - i -1];
		nbr[size - i -1] = tmp;
		++i;
	}
}

static char	*convert(unsigned int n, size_t size)
{
	int		i;
	char	*nbr;

	nbr = malloc(size * sizeof(char));
	if (!nbr)
		return (NULL);
	i = 0;
	nbr[i] = '\0';
	if (n == 0)
		nbr[++i] = '0';
	while (n != 0)
	{
		nbr[++i] = '0' + (n % 10);
		n /= 10;
	}
	return (nbr);
}

static size_t	get_size(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*nbr;
	size_t			dgt_size;
	int				is_neg;
	unsigned int	k;

	k = (unsigned int)n;
	is_neg = (n < 0);
	if (n < 0)
		k = -(unsigned int)n;
	dgt_size = get_size(k) + is_neg +1;
	nbr = convert(k, dgt_size);
	if (!nbr)
		return (NULL);
	if (is_neg)
		nbr[dgt_size -1] = '-';
	reverse(nbr, dgt_size);
	return (nbr);
}

int main(void)
{
	printf("Tested function is : %s\n", "itoa");
	printf("%d : %s\n", INT_MAX, ft_itoa(INT_MAX));
	printf("%d : %s\n", INT_MIN, ft_itoa(INT_MIN));
	printf("%d : %s\n", 0, ft_itoa(0));
	printf("%d : %s\n", 1, ft_itoa(1));
	printf("%d : %s\n", -1, ft_itoa(-1));
	printf("%d : %s\n", 42, ft_itoa(42));

	return (0);
}