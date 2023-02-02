/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:49:30 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/22 16:04:52 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

static char	f_mapi(unsigned int i, char c)
{
	/*return (c + i);*/
	if (i > 12 && (c >= 'a' && c <= 'z'))
		c -= 32;
	if (i < 13 && (c >= 'A' && c <= 'Z'))
		c += 32;
	return (c);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char *)malloc((ft_strlen(s) +1) * sizeof(char));
	if (!res)
		return (NULL);
	res = ft_memcpy(res, s, ft_strlen(s) +1);
	while (res[i] != '\0')
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	res[i++] = '\0';
	return (res);
}

int main(void)
{
	char	*str;

	printf("Tested function is : %s\n", "strmapi");
	str = "abcdefghijklmnopqrstuvwxyz";
	printf("%s : %s\n", str, ft_strmapi(str, f_mapi));
	str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%s : %s\n", str, ft_strmapi(str, f_mapi));

	return (0);
}