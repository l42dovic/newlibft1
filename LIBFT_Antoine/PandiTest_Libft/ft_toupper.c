/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:22:50 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 16:35:13 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
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
	printf("Tested function is : %s\n", "toupper");
   	printf("%d : %d\n", toupper(a), ft_toupper(a));
	printf("%d : %d\n", toupper(b), ft_toupper(b));
	printf("%d : %d\n", toupper(c), ft_toupper(c));
	printf("%d : %d\n", toupper(d), ft_toupper(d));
	printf("%d : %d\n", toupper(e), ft_toupper(e));

	return (0);
}