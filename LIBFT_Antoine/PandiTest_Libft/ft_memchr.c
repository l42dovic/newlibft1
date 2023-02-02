/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:27:32 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/09 11:26:11 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	void			*vs;
	unsigned char	*cs;
	unsigned char	cc;

	i = 0;
	vs = (void *)s;
	cs = (unsigned char *)vs;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (cs[i] == cc)
			return (vs + i);
		i++;
	}
	return (NULL);
}

int main(void)
{
	char	str1[] = "bidouille une nouilles";
	char	*str2 = malloc(2 * sizeof(*str2));

	printf("Tested function is : %s\n", "memchr");
   	printf("%s : %s\n", (char *)memchr(str1, 'a', 23), (char *)ft_memchr(str1, 'a', 23));
	printf("%s : %s\n", (char *)memchr(str1, '\200', 23), (char *)ft_memchr(str1, '\200', 23));
	printf("%s : %s\n", (char *)memchr(str1, 's', 21), (char *)ft_memchr(str1, 's', 21));
	printf("%s : %s\n", (char *)memchr(str1, 's', 22), (char *)ft_memchr(str1, 's', 22));
	if (!str2)
		return (0);
	str2[0] = '\0';
	str2[1] = 'a';
	printf("%s : %s\n", (char *)memchr(str2, 'a', 2), (char *)ft_memchr(str2, 'a', 2));
	free(str2);

	return (0);
}