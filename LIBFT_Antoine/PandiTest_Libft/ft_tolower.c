/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:36:37 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 16:38:31 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int main(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;

	a = 'a';
	b = 'A';
	c = 'z';
	d = 'Z';
	e = 127;
	printf("Tested function is : %s\n", "tolower");
   	printf("%d : %d\n", tolower(a), ft_tolower(a));
	printf("%d : %d\n", tolower(b), ft_tolower(b));
	printf("%d : %d\n", tolower(c), ft_tolower(c));
	printf("%d : %d\n", tolower(d), ft_tolower(d));
	printf("%d : %d\n", tolower(e), ft_tolower(e));

	return (0);
}