/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:42:13 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/07 17:45:34 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	b = '\n';
	c = '\0';
	d = '=';
	e = '\0' -1;
	printf("Tested function is : %s\n", "isascii");
   	printf("%d : %d\n", isascii(a), ft_isascii(a));
	printf("%d : %d\n", isascii(b), ft_isascii(b));
	printf("%d : %d\n", isascii(c), ft_isascii(c));
	printf("%d : %d\n", isascii(d), ft_isascii(d));
	printf("%d : %d\n", isascii(e), ft_isascii(e));

	return (0);
}