/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:17:50 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/17 18:09:40 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_trim(char signe, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == signe)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_trim(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	while (j > (size_t)i && ft_trim(s1[j -1], set) == 1)
		j--;
	str = ft_substr(s1, i, j - (size_t)i);
	return (str);
}
