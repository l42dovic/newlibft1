/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:40:26 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/22 16:07:58 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <limits.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cbig;
	size_t	ltl_len;

	if (!big && len == 0)
		return (NULL);
	cbig = (char *)big;
	ltl_len = ft_strlen(little);
	if (ltl_len == 0)
		return (cbig);
	i = 0;
	while (cbig[i] && ltl_len <= len)
	{
		j = 0;
		while (cbig[i + j] == little[j] && cbig[i + j] != 0 && little[j] != 0)
			j++;
		if (little[j] == '\0')
			return (&cbig[i]);
		i++;
		len--;
	}
	return (NULL);
}

int main(void)
{
	const char	*str = "aaabcabcd";
	const char	*s = "aabc";
	const char	*vid = "";

	printf("Tested function is : %s\n", "strnstr");
	/*str = NULL;
	printf("%s : %s\n", strnstr(str, s, 5), ft_strnstr(str, s, 5));*/
	printf("%s : %s\n", strnstr(str, s, 4), ft_strnstr(str, s, 4));
	printf("%s : %s\n", strnstr(s, str, 4), ft_strnstr(s, str, 4));
	printf("%s : %s\n", strnstr(str, s, -1), ft_strnstr(str, s, -1));
	printf("%s : %s\n", strnstr(str, "a", -1), ft_strnstr(str, "a", -1));
	printf("%s : %s\n", strnstr(str, "c", -1), ft_strnstr(str, "c", -1));
	s = "coucou";
	printf("%s : %s\n", strnstr(vid, s, -1), ft_strnstr(str, s, -1));
	s = "12345"; 
	printf("%s : %s\n", strnstr(vid, s, 5), ft_strnstr(str, s, 5));
	s = "";
	printf("%s : %s\n", strnstr(str, s, 5), ft_strnstr(str, s, 5));
	s = "abcd";
	printf("%s : %s\n", strnstr(str, s, 9), ft_strnstr(str, s, 9));

	return (0);
}