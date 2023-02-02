/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:20:50 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 16:21:20 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>


size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	k = ft_strlen(dest);
	if (k >= size)
		return (size + j);
	while (src[i] != '\0' && (i < size - k))
	{
		dest[i + k] = src[i];
		i++;
	}
	if (i < size - k)
		dest[i + k] = '\0';
	else
		dest[i + k -1] = '\0';
	return (j + k);
}

int main(void)
{
	char	dest[1024] = "toto";
	const char	*str;

	printf("Tested function is : %s\n", "strlcat");
	/*str = NULL;
	printf("%lu : %lu\n", strlcat(dest, str, 3), ft_strlcat(dest, str, 3));*/
	str = "123";
	printf("%lu : %lu\n", strlcat(dest, str, 3), ft_strlcat(dest, str, 3));
	str = "";
	printf("%lu : %lu\n", strlcat(dest, str, 3), ft_strlcat(dest, str, 3));
	str = "Bon jour"; 
	printf("%lu : %lu\n", strlcat(dest, str, 5), ft_strlcat(dest, str, 5));
	str = "ah\0pandito";
	printf("%lu : %lu\n", strlcat(dest, str, 5), ft_strlcat(dest, str, 5));
	str = "Salut moi c'est Pandito";
	printf("%lu : %lu\n", strlcat(dest, str, 23), ft_strlcat(dest, str, 23));

	return (0);
}