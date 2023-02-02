/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:27:38 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/21 21:56:27 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (cs1[i] == cs2[i] && i < n -1)
		i++;
	if (cs1[i] - cs2[i] != 0)
		return (cs1[i] - cs2[i]);
	else
		return (0);
}

int main(void)
{
	char	str1[] = "bidouille une nouille";
	char	str2[] = "bidouille une couille";

	printf("Tested function is : %s\n", "memcmp");
   	printf("%d : %d\n", memcmp(str1, str2, 12), ft_memcmp(str1, str2, 0));
	printf("%d : %d\n", memcmp(str1, str2, 6), ft_memcmp(str1, str2, 1));
	printf("%d : %d\n", memcmp("a", "b", 0), ft_memcmp("a", "b", 0));
	str1[1] = '\0';
	str1[2] = 'a';
	str2[1] = '\0';
	str2[2] = 'b';
	printf("%d : %d\n", memcmp(str1, str2, 3), ft_memcmp(str1, str2, 3));
	str1[1] = '\200';
	printf("%d : %d\n", memcmp(str1, str2, 2), ft_memcmp(str1, str2, 2));

	return (0);
}