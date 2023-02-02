/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:26:15 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/10 14:53:10 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

char	*ft_strdup(const char *s)
{
	char	*cs;
	size_t	size_m;
	char	*copy;
	size_t	i;

	cs = (char *)s;
	size_m = ft_strlen(s);
	copy = (char *)malloc(((size_m +1) * sizeof(char)));
	if (copy == NULL)
		return (NULL);
	if (copy != NULL)
	{
		i = 0;
		while (cs[i])
		{
			copy[i] = cs[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}

int main(void)
{
	char	*str = ft_strdup((const char *)"bidouille");
	
	printf("Tested function is : %s\n", "strdup");
	printf("%d\n", ft_strncmp(str, "bidouille", 9));
	printf("%d\n", ft_strncmp(str, "bidouille", 4));
	printf("%d\n", ft_strncmp(str, "bidouille", 0));
	printf("%s : %s\n", strdup(str), ft_strdup(str));
}