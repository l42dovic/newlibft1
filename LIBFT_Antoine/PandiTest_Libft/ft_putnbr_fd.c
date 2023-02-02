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
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

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

int main(void)
{
	int	i = 42;

	printf("Tested function is : %s\n", "putnbr_fd");
	ft_putnbr_fd(i, 2);

	return (0);
}