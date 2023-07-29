/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:23:21 by blax              #+#    #+#             */
/*   Updated: 2023/07/29 18:36:46 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_strndup(char *str, int start, int len_word)
{
    int i;
    char * new_str;
    
    i = 0;
    new_str = (char *) malloc(sizeof(char) * (len_word + 1));
    if (!new_str)
        return (NULL);
    while (str[start + i] && i < len_word)
    {
        new_str[i] = str[start + i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

int is_blank(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
}

int ft_count_words(char *str)
{
    int i;
    int count_words;

    count_words = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] && is_blank(str[i]))
            i++;
        if (str[i] && !is_blank(str[i]))
            count_words++;
        while (str[i] && !is_blank(str[i]))
            i++;
    }
    return (count_words);
}

char    **ft_split(char *str)
{
    char **tab;
    int len_word;
    int i;
    int j;
    int start;
    int count_words;

    len_word = 0;
    i = 0;
    j = 0;
    count_words = ft_count_words(str);
    tab = (char **) malloc(sizeof(char *) * (count_words + 1));
    if (!tab)
        return (NULL);
    while (str[i])
    {
        while (str[i] && is_blank(str[i]))
            i++;
        start = i;
        while (str[i] && !is_blank(str[i]))
        {
            len_word++;
            i++;
        }
        if (j < count_words)
        {
            tab[j] = ft_strndup(str, start, len_word);
            if (!tab[j])
                return (NULL);
            j++;
            len_word = 0;
        }
    }
    tab[j] = '\0';
    return (tab);
}

// int main(int argc, char *argv[])
// {
//     char **tab;
//     int i;

//     i = 0;
//     if (argc == 2)
//         tab = ft_split(argv[1]);
//     else
//         return (0);
//     while (i < 4)
//     {
//         printf("word_%d: %s-\n", i, tab[i]);
//         i++;
//     }
//     return (0);
// }