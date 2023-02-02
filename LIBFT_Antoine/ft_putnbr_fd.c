/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:51:12 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/14 15:51:15 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;

	ln = (long int)n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = ln * -1;
	}
	if (ln >= 10)
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putchar_fd((ln % 10) + '0', fd);
	}
	else
		ft_putchar_fd(ln + '0', fd);
}
