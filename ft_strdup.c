/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:30:29 by blax              #+#    #+#             */
/*   Updated: 2023/07/29 18:35:53 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char *new_str;
    int i;

    i = 0;
    new_str = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!new_str)
        return (NULL);
    while (src[i])
    {
        new_str[i] = src[i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

// int main(void)
// {
//     char *src = "Bonjour";
//     char *new_src;
    
//     printf("src: %s\n", src);
//     new_src = ft_strdup(src);
//     printf("src_dup: %s\n", new_src);
//     free(new_src);
//     return (0);
// }