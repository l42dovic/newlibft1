/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:11:38 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/10 14:10:15 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (((nmemb * size) / size) != nmemb)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

int main(void)
{
	printf("Tested function is : %s\n", "calloc");
	void	*ptr = ft_calloc(2, 2);
	char	s[] = {0, 0, 0, 0};
	printf("%d\n", ft_memcmp(ptr, s, 4));
	free(ptr);

	return (0);
}