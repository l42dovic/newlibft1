/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:38:16 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/23 14:50:43 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

static int	wrd_count(const char *s, char c)
{
	size_t	i;
	int		wrd_count;

	i = 0;
	wrd_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			wrd_count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (wrd_count);
}

static char	**free_all(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static char	**split_me(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**result;

	i = 0;
	k = 0;
	result = (char **)malloc((wrd_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (k != wrd_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			result[k] = ft_substr(s, j, i - j);
		if (!result[k])
			return (free_all(result));
		k++;
	}
	result[k++] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = split_me(s, c);
	return (result);
}

int main(void)
{
	int		i;
	char	**tab;
	char	**ctrl_tab;

	printf("Tested function is : %s\n", "split");
	ctrl_tab = (char **)malloc(10 * sizeof(*ctrl_tab));
	if (!ctrl_tab)
		return (0);
	ctrl_tab[0] = ft_strdup("Bidouille");
	ctrl_tab[1] = ft_strdup("une");
	ctrl_tab[2] = ft_strdup("nouille");
	ctrl_tab[3] = NULL;
	tab = ft_split("   Bidouille une  nouille  ", ' ');
	i = 0;
	while (tab && ctrl_tab)
	{
		printf("%s : %s\n", ctrl_tab[i], tab[i]);
		i++;
	}
	free(tab);
	free(ctrl_tab);
	ctrl_tab[0] = ft_strdup("*Bidouille");
	ctrl_tab[1] = ft_strdup("une");
	ctrl_tab[2] = ft_strdup("nouille  ");
	ctrl_tab[3] = NULL;
	tab = ft_split("*Bidouille\377une\377nouille  ", '\377');
	i = 0;
	while (tab && ctrl_tab)
	{
		printf("%s : %s\n", ctrl_tab[i], tab[i]);
		i++;
	}
	free(tab);
	free(ctrl_tab);
	tab = ft_split(NULL, ' ');
	if (!tab)
		printf("%s", "No string");
	free(tab);
	free(ctrl_tab);

	return(0);
}