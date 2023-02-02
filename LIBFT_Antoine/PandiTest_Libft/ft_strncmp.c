/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:15:31 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 18:26:25 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n -1)
		i++;
	if (s1[i] - s2[i] != 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}

int main(void)
{
	const char	*str = "bidouille une nouille";
	const char	*s;

	printf("Tested function is : %s\n", "strncmp");
	/*str = NULL;
	printf("%d : %d\n", strncmp(str, s, 5), ft_strncmp(str, s, 5));*/
	s = "bidouille une nouille";
	printf("%d : %d\n", strncmp(str, s, 21), ft_strncmp(str, s, 21));
	s = "bidouille une nouille";
	printf("%d : %d\n", strncmp(str, s, 0), ft_strncmp(str, s, 0));
	s = "bidouille une couille";
	printf("%d : %d\n", strncmp(str, s, 21), ft_strncmp(str, s, 21));
	s = " bidouille une nouille "; 
	printf("%d : %d\n", strncmp(str, s, 15), ft_strncmp(str, s, 15));
	s = "";
	printf("%d : %d\n", strncmp(str, s, 5), ft_strncmp(str, s, 5));
	str = "";
	s = "bidouille une nouille";
	printf("%d : %d\n", strncmp(str, s, 5), ft_strncmp(str, s, 5));

	return (0);
}