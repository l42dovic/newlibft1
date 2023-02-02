/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:02:46 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/22 16:18:47 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cs;
	char	*dest;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	cs = (char *)s;
	dest = malloc((len * sizeof(char)) + 1);
	if (dest == NULL)
		return (NULL);
	if (dest != NULL)
	{
		while (i < len && cs[i] != '\0')
		{
			dest[i] = cs[i + start];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

int main(void)
{
	char	*str;

	printf("Tested function is : %s\n", "substr");
	str = ft_substr(NULL, 0, 5);
	if (!str)
		printf("%s\n", "No string");
	str = ft_substr("bidouille", 0, 42000);
	printf("%s\n", str);
	printf("%d\n", ft_strncmp(str, "bidouille", 10));
	str = ft_substr("bidouille", 0, 0);
	printf("%s\n", str);
	printf("%d\n", ft_strncmp(str, "", 10));
	str = ft_substr("bidouille", 3, 7);
	printf("%s\n", str);
	printf("%d\n", ft_strncmp(str, "ouille", 10));
	str = ft_substr("bidouille une nouille", 10, 11);
	printf("%s\n", str);
	printf("%d\n", ft_strncmp("une nouille", str, 12));
	str = ft_substr("", 0, 1);
	printf("%s\n", str);
	printf("%d\n", ft_strncmp("", str, 10));
	str = ft_substr("test", 1, 2);
	printf("%s\n", str);
	printf("%d\n", ft_strncmp(str, "es", 10));


	return (0);
}