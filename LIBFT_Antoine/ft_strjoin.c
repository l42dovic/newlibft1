/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:24:09 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/10 17:21:29 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*joint;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	joint = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (joint == NULL)
		return (NULL);
	while (s1[i])
	{
		joint[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joint[i + j] = s2[j];
		j++;
	}
	joint[i + j] = '\0';
	return (joint);
}