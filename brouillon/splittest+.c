/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splittest+.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:35:43 by labbamon          #+#    #+#             */
/* 
dated: 2023/01/08 12:39:51 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAX_LEN 1000

// Cette fonction prend une chaîne de caractères const en entrée et un caractère de délimitation en entrée et renvoie un tableau de chaînes de caractères obtenues en divisant la chaîne de caractères en utilisant le caractère de délimitation.
char **ft_split(char const *s, char c) {
    int i;
    int j;
    int count = 0;
    int len = ft_strlen(s);
    char** result;
    result = malloc(MAX_LEN*sizeof(char*));
    char* temp = malloc(len+1);
    for (i = 0, j = 0; i < len; i++) {
        if (s[i] != c) {
            temp[j] = s[i];
            j++;
        } else {
            temp[j] = '\0';
            result[count] = malloc(ft_strlen(temp)+1);
            ft_strlcpy(result[count], temp, ft_strlen(temp)+1);
            count++;
            j = 0;
        }
    }
    temp[j] = '\0';
    result[count] = malloc(ft_strlen(temp)+1);
    ft_strlcpy(result[count], temp, ft_strlen(temp)+1);
    count++;
    result = realloc(result, count*sizeof(char*));
    free(temp);
    return result;
}

int main() {
    char str[] = "Bonjour, comment ça va?";
    char delim = ' ';
    char** result;
    result = ft_split(str, delim);
    int i;
    for (i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    for (i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
    return 0;
}
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 1000

// Cette fonction prend une chaîne de caractères const en entrée et un caractère de délimitation en entrée et renvoie un tableau de chaînes de caractères obtenues en divisant la chaîne de caractères en utilisant le caractère de délimitation.
char **ft_split(char const *s, char c) {
    int i;
    int j;
    int count = 0;
    int len = strlen(s);
    char** result;
    result = malloc(MAX_LEN*sizeof(char*));
    char* temp = malloc(len+1);
    for (i = 0, j = 0; i < len; i++) {
        if (s[i] != c) {
            temp[j] = s[i];
            j++;
        } else {
            temp[j] = '\0';
            result[count] = malloc(strlen(temp)+1);
            strlcpy(result[count], temp, strlen(temp)+1);
            count++;
            j = 0;
        }
    }
    temp[j] = '\0';
    result[count] = malloc(strlen(temp)+1);
    strlcpy(result[count], temp, strlen(temp)+1);
    count++;
    int num_elements = count;
    result = malloc((num_elements+1)*sizeof(char*));
    for (i = 0; i < num_elements; i++) {
        result[i] = malloc(strlen(temp)+1);
        strlcpy(result[i], temp, strlen(temp)+1);
    }
    result[num_elements] = NULL;
    free(temp);
    return result;
}

int main() {
    char str[] = "Bonjour, comment ça va?";
    char delim = ' ';
    char** result;
    result = ft_split(str, delim);
    int i;
    for (i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    for (i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
    return 0;
}
*/
