/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:54:08 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/23 19:06:22 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*strt;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	strt = ft_lstnew((*f)(lst->content));
	new = strt;
	lst = lst->next;
	if (!strt)
		return (NULL);
	while (lst != NULL)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (!new->next)
		{
			ft_lstclear(&strt, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (strt);
}

/*#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	*return_content(void *content)
{
	char	*dest;
	int	i;

	((char *)content); // tranformer content en (char *) ensuite strcpy content, puis modifier la copie 
	dest = (char *)malloc(sizeof((char *)content) * (ft_strlen((char *)(content))));
	ft_strcpy(dest, content);
	dest[0] = 'c';
	return (dest);
}

void	delete_content(void *content)
{
	(void)content;
}

# include <stdio.h>
int main()
{
	t_list	*list; //declaration d'une nouvelle liste
	t_list	*first; // declaration d'une nouellle liste qui va permettre de conserver l'adresse du premier maillon
	int	i;

	i = 0;
	list = ft_lstnew("premier"); //creation du premier maillon de content "premier"
	first = list; // first va pointe vers la meme adresse que le pointeur
		      // list car je prends l'adresse qui est a l'interieur du pointeur list et
		      //je la met dans le pointeur first. pour conserver un pointeur sur le premier element
	while(i < 5) 
	{
		list->next = ft_lstnew("suivant"); // l'adresse de next est egale a l'adresse du prochain maillon de content "suivant"
		list = list->next; // on avance de un maillon (deplacement) (l'adresse de list est = a l'addresse du prochain maillon)
		i++;
	}
	list->next = ft_lstnew("dernier");// l'adresse de next est egale a l'adresse du dernier maillon de content "dernier"
	list = first; // on utilise la valeur stocke pour revenir a l'adresse du premier maillon
	while(list->next != NULL) // tant que le pointeur next n'est pas egal a NULL
	{
		printf("%s\n",list->content); // on imprime le content de notre element
		list = list->next; // on avance
	}
	printf("%s\n",list->content); // on imprime le contenue a l'adresse du dernier element
	t_list *new_lst;
	new_lst = ft_lstmap(first, return_content, delete_content);
	while(new_lst != NULL) // tant que le pointeur next n'est pas egal a NULL
	{
		printf("%s\n",new_lst->content); // on imprime le content de notre element
		new_lst = new_lst->next; // on avance
	}
}*/