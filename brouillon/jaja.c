/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jaja.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:07:22 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/07 16:56:19 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** split(char* str, char* delimiter) {
  // Allouer de la mémoire pour le tableau de chaînes de caractères
  char** result = malloc(sizeof(char*) * 10);

  // Initialiser les variables nécessaires
  char* pch = strtok(str, delimiter);
  int i = 0;

  // Scinder la chaîne str en utilisant le délimiteur delimiter
  // et stocker les sous-chaînes dans le tableau de chaînes de caractères
  while (pch != NULL) {
    result[i++] = pch;
    pch = strtok(NULL, delimiter);
  }

  // Renvoyer le tableau de chaînes de caractères
  return result;
}

int main() {
  char str[] = "lorem,ipsum,dolor,sit,amet";
  char** result = split(str, ",");

  for (int i = 0; i < 5; i++) {
    printf("%s\n", result[i]);
  }

  return 0;
}

#include <stdio.h>
#define MAXILIGNE 1000

int	interligne(char ligne[], int max);
int	chpos(char source[], char chercher[]);

	char modele = "ous"; 
int     lireligne(chars[], int lim)
{       
        int     c, i;

        i = 0;
        while (--lim > 0 && (c=getchar()) !=EOF && c!='\n')
                s[i++] = c;
        if (c == '\n')
                s[i++] =c;
        s[i] = '\0';
        return i;
}
int	chpos(chars[], char t[])
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j=i, k=0; t[k] !='\0' && s[j]==t[k]; j++, k++)
			if (k > 0 && t[k] == '\0')
				return i;
	}
	return -1;
}
main()
{
        char ligne[MAXILIGNE];
        int trouvees = 0;
       
        while (lireligne(ligne, MAXILIGNE) > 0)
                if(chpos(ligne, modele) >= 0)
                {
                        printf("%s", ligne);
                        trouvees++;
                }
        return trouvees;
}
