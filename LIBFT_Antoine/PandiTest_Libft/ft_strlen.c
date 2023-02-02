/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:35 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 16:21:51 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	const char	*str;

	printf("Tested function is : %s\n", "strlen");
	/*str = NULL;
	printf("%lu : %lu\n", strlen(str), ft_strlen(str));*/
	str = "123";
	printf("%lu : %lu\n", strlen(str), ft_strlen(str));
	str = "";
	printf("%lu : %lu\n", strlen(str), ft_strlen(str));
	str = "Bon jour"; 
	printf("%lu : %lu\n", strlen(str), ft_strlen(str));
	str = "ah\0pandito";
	printf("%lu : %lu\n", strlen(str), ft_strlen(str));
	str = "Salut moi c'est Pandito";
	printf("%lu : %lu\n", strlen(str), ft_strlen(str));

	return (0);
}