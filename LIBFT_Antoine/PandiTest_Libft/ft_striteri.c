/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:49:49 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/22 15:09:07 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

static void	f_iteri(unsigned int i, char *s)
{
		if (i > 9 && (s[0] >= 'a' && s[0] <= 'z'))
			s[0] -= 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

int main(void)
{
	char	*str;

	printf("Tested function is : %s\n", "striteri");
	str = "";
	ft_striteri(str, &f_iteri);
	printf("%d\n", ft_strncmp(str, "", 10));
	str = "0";
	ft_striteri(str, &f_iteri);
	printf("%d\n", ft_strncmp(str, "0", 10));
	char  str1[] = "bidouille une nouille";
	ft_striteri(str1, &f_iteri);
	printf("%s\n", str1);
	printf("%d\n", ft_strncmp(str1, "bidouille UNE NOUILLE", 15));

	return (0);
}