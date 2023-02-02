/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:37:35 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/07 17:40:58 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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
	b = '0';
	c = 'a' -1;
	d = 'Z';
	e = '9' +1;
	printf("Tested function is : %s\n", "isalnum");
   	printf("%d : %d\n", isalnum(a), ft_isalnum(a));
	printf("%d : %d\n", isalnum(b), ft_isalnum(b));
	printf("%d : %d\n", isalnum(c), ft_isalnum(c));
	printf("%d : %d\n", isalnum(d), ft_isalnum(d));
	printf("%d : %d\n", isalnum(e), ft_isalnum(e));

	return (0);
}