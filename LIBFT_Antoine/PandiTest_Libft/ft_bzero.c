/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:43 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 16:19:53 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

int main(void)
{
	void	*mem;

	mem = malloc(5 * sizeof(*mem));
	if (!mem)
		return (0);
	printf("Tested function is : %s\n", "bzero");
	ft_memset(mem, 'e', 5);
	ft_bzero(mem, 5);
	printf("%s", (char *)mem);
	free(mem);

	return (0);
}