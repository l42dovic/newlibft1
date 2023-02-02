/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splittest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:49:33 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/08 11:49:53 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

// Cette fonction prend une chaîne de caractères en entrée et la divise en plusieurs chaînes de caractères en utilisant le caractère de délimitation spécifié.
// Elle renvoie le nombre de chaînes de caractères obtenues.
int split(char* str, char delim, char*** result) {
    int count = 0;
    int str_len = strlen(str);
    char* temp = malloc(str_len+1);
    int i;
    int j = 0;
    for (i = 0; i < str_len; i++) {
        if (str[i] == delim) {
            temp[j] = '\0';
            (*result)[count] = malloc(strlen(temp)+1);
            strcpy((*result)[count], temp);
            count++;
            j = 0;
        } else {
            temp[j] = str[i];
            j++;
        }
    }
    temp[j] = '\0';
    (*result)[count] = malloc(strlen(temp)+1);
    strcpy((*result)[count], temp);
    count++;
    free(temp);
    return count;
}

int main() {
    char str[] = "Bonjour, comment ça va?";
    char delim = ' ';
    char** result;
    int count;
    result = malloc(MAX_LEN*sizeof(char*));
    count = split(str, delim, &result);
    int i;
    for (i = 0; i < count; i++) {
        printf("%s\n", result[i]);
    }
    for (i = 0; i < count; i++) {
        free(result[i]);
    }
    free(result);
    return 0;
}

