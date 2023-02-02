/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:30:03 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/09 13:06:48 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sign(const char *s)
{
	int	sign;
	int	count;

	sign = 1;
	count = 0;
	while (*s && (!(*s >= 48 && *s <= 57)))
	{	
		if (*s == 43 || *s == 45)
			count++;
		if (*s == 45)
			sign = -1;
		else if (*s == 43)
			sign = 1;
		s++;
	}
	if (count > 1)
		return (0);
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	size_t	nb;
	int		sign;

	nb = 0;
	sign = is_sign(nptr);
	while ((*nptr == 32) || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	while (*nptr == 43 || *nptr == 45)
		nptr++;
	while (*nptr != '\0' && (*nptr >= 48 && *nptr <= 57))
	{
		nb = (nb * 10) + (*nptr - 48);
		nptr++;
	}
	while (*nptr != '\0' && (!(*nptr >= 48 && *nptr <= 57)))
		break ;
	return (nb * sign);
}
