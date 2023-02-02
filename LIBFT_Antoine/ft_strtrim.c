/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:22:18 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/22 16:17:04 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_there(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	s;
	size_t	f;
	char	*trimd;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	while (s1[s] && is_there(s1[s], set) == 1)
		s++;
	f = ft_strlen(s1);
	while (f > s && is_there(s1[f -1], set) == 1)
		f--;
	trimd = (char *)malloc((f - s) + 1 * sizeof(char));
	if (!trimd)
		return (NULL);
	i = 0;
	while (s < f)
		trimd[i++] = s1[s++];
	trimd[i] = '\0';
	return (trimd);
}
