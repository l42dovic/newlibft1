/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:43:51 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/20 14:06:46 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	len++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static	char	*ft_exep(char *string, int nb)
{
	int		i;
	long	n;

	n = nb;
	i = ft_int_len(n);
	string[i--] = '\0';
	if (n == 0)
	{
			string[0] = '0';
		return (string);
	}
	if (n < 0)
	{
			string[0] = '-';
			n *= -1;
	}
	while (n > 0)
	{
			string[i--] = (n % 10 + '0');
			n = n / 10;
	}
	return (string);
}	

char	*ft_itoa(int nb)
{
	char	*string;
	long	n;
	int		i;

	n = nb;
	i = ft_int_len(n);
	string = malloc(sizeof(char) * i + 1);
	if (!string)
		return (NULL);
	string = ft_exep(string, nb);
	return (string);
}
