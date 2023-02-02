/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:04:12 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 16:21:04 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (n > 0 && i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


int main(void)
{
	char	str1[] = "bidouille une nouille";
	char	str2[] = "bidouille une nouille";

	printf("Tested function is : %s\n", "memset");
   	printf("%s : %s\n", (char *)memset(str1, '-', 1), (char *)ft_memset(str2, '-', 1));
	printf("%s : %s\n", (char *)memset(str1, '-', 5), (char *)ft_memset(str2, '-', 5));
	printf("%s : %s\n", (char *)memset(str1, '-', 9), (char *)ft_memset(str2, '-', 9));
	printf("%s : %s\n", (char *)memset(str1, 0, 5), (char *)ft_memset(str2, 0, 5));
	str1[3] = '\0';
	str2[3] = '\0';
	printf("%s : %s\n", (char *)memset(str1, '-', 1), (char *)ft_memset(str2, '-', 1));
	printf("%s : %s\n", (char *)memset(str1, '-', 5), (char *)ft_memset(str2, '-', 5));

	return (0);
}