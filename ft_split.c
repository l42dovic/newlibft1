/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:12:23 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/22 19:31:30 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cptw(const char *s, int c)
{
	size_t	i;
	int		cptw;

	i = 0;
	cptw = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		cptw++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (cptw);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static	char	**ft_putword(char **result, const char *s, char c, int cptw)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	k = 0;
	cptw = ft_cptw(s, c);
	result = malloc((cptw + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (k != cptw)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			result[k] = ft_substr(s, j, i - j);
		if (!result[k])
			return (ft_free(result));
		k++;
	}
	result[k++] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		cptw;

	result = NULL;
	cptw = 0;
	if (!s)
		return (NULL);
	result = ft_putword(result, s, c, cptw);
	return (result);
}
