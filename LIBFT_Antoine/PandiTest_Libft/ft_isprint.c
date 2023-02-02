/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:46:00 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/07 17:50:07 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

int main(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;

	a = 'a';
	b = 8;
	c = 32;
	d = 'Z';
	e = 127;
	printf("Tested function is : %s\n", "isprint");
   	printf("%d : %d\n", isprint(a), ft_isprint(a));
	printf("%d : %d\n", isprint(b), ft_isprint(b));
	printf("%d : %d\n", isprint(c), ft_isprint(c));
	printf("%d : %d\n", isprint(d), ft_isprint(d));
	printf("%d : %d\n", isprint(e), ft_isprint(e));

	return (0);
}