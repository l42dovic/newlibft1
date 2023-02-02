/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:56:09 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/14 16:13:19 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv)
{
    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", isalpha(argv++), ft_isalpha(argv++));

    (char)argv[] = {'0', '0' -1, '9' +1, '9', '7' +5}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", isdigit(argv++), ft_isdigit(argv++));

    (char)argv[] = {'a', '0', 'a' -1, 'Z', '9' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", isalnum(argv++), ft_isalnum(argv++));

    (char)argv[] = {'a', '\n', '\0', '=', '\0' -1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", isascii(argv++), ft_isascii(argv++));

    (char)argv[] = {'a', 8, 32, 'Z', 127}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", isprint(argv++), ft_isprint(argv++));

    argv[] = {"123", "", "Bon jour"}
    printf("Tested function is : %s\n", __func__);
    printf("%zu : %zu\n", strlen(argv++), ft_strlen(argv++));

    /*argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", memset(argv++), ft_memset(argv++));

    argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", bzero(argv++), ft_bzero(argv++));

    argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", memcpy(argv++), ft_memcpy(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", memmove(argv++), ft_memmove(argv++));*/

    argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%zu : %zu\n", strlcpy(argv++), ft_strlcpy(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%zu : %zu\n", strlcat(argv++), ft_strlcat(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", toupper(argv++), ft_toupper(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", tolower(argv++), ft_tolower(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", strchr(argv++), ft_strchr(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", strrchr(argv++), ft_strrchr(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", strncmp(argv++), ft_strncmp(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", memchr(argv++), ft_memchr(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", memcmp(argv++), ft_memcmp(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", strnstr(argv++), ft_strnstr(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d : %d\n", atoi(argv++), ft_atoi(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", calloc(argv++), ft_calloc(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s : %s\n", strdup(argv++), ft_strdup(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_substr(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_strjoin(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_strtrim(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_split(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_itoa(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_strmapi(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_striteri(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%c\n", ft_putchar_fd(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_putstr_fd(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%s\n", ft_putendl_fd(argv++));

    (char)argv[] = {'a', '\n', 'a' -1, 'Z', 'Z' +1}
    printf("Tested function is : %s\n", __func__);
    printf("%d\n", ft_putnbr_fd(argv++));

    return (0);
}
