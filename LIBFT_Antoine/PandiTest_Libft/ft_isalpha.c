/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:59:32 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/07 17:21:44 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
	c = 'a' -1;
	d = 'Z';
	e = 'Z' +1;
	printf("Tested function is : %s\n", "isalpha");
   	printf("%d : %d\n", isalpha(a), ft_isalpha(a));
	printf("%d : %d\n", isalpha(b), ft_isalpha(b));
	printf("%d : %d\n", isalpha(c), ft_isalpha(c));
	printf("%d : %d\n", isalpha(d), ft_isalpha(d));
	printf("%d : %d\n", isalpha(e), ft_isalpha(e));

	return (0);
}