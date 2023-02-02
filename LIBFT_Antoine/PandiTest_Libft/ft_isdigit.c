/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:28:03 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/07 17:36:49 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	a = '0';
	b = '0' -1;
	c = '9' +1;
	d = '9';
	e = '7' +5;
	printf("Tested function is : %s\n", "isdigit");
   	printf("%d : %d\n", isdigit(a), ft_isdigit(a));
	printf("%d : %d\n", isdigit(b), ft_isdigit(b));
	printf("%d : %d\n", isdigit(c), ft_isdigit(c));
	printf("%d : %d\n", isdigit(d), ft_isdigit(d));
	printf("%d : %d\n", isdigit(e), ft_isdigit(e));

	return (0);
}