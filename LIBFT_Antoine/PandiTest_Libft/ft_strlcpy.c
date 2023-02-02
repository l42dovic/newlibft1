/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:07:49 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 16:21:37 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>


size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && size > 0 && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int main(void)
{
	char	dest[1024] = "toto";
	const char	*str;

	printf("Tested function is : %s\n", "strlcpy");
	/*str = NULL;
	printf("%ld : %lu\n", strlcpy(dest, str, 3), ft_strlcpy(dest, str, 3));*/
	str = "123";
	printf("%ld : %lu\n", strlcpy(dest, str, 3), ft_strlcpy(dest, str, 3));
	str = "";
	printf("%ld : %lu\n", strlcpy(dest, str, 3), ft_strlcpy(dest, str, 3));
	str = "Bon jour"; 
	printf("%ld : %lu\n", strlcpy(dest, str, 5), ft_strlcpy(dest, str, 5));
	str = "ah\0pandito";
	printf("%ld : %lu\n", strlcpy(dest, str, 5), ft_strlcpy(dest, str, 5));
	str = "Salut moi c'est Pandito";
	printf("%ld : %lu\n", strlcpy(dest, str, 23), ft_strlcpy(dest, str, 23));

	return (0);
}