/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:39:04 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 18:13:35 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i] && c != 0)
	{
		if (s[i] == (unsigned char)c)
		{
			j = i;
			count++;
		}
		i++;
	}
	if (count != 0)
		return ((char *)s + j);
	else
		return (NULL);
}

int main(void)
{
	char	c;
	const char	*str = "bidouille une nouille";

	printf("Tested function is : %s\n", "strrchr");
	/*str = NULL;
	printf("%s : %s\n", strrchr(str, c), ft_strrchr(str, c));*/
	c = 'i';
	printf("%s : %s\n", strrchr(str, c), ft_strrchr(str, c));
	c = ' ';
	printf("%s : %s\n", strrchr(str, c), ft_strrchr(str, c));
	c = 'u'; 
	printf("%s : %s\n", strrchr(str, c), ft_strrchr(str, c));
	c = 0;
	printf("%s : %s\n", strrchr(str, c), ft_strrchr(str, c));
	c = '@';
	printf("%s : %s\n", strrchr(str, c), ft_strrchr(str, c));

	return (0);
}