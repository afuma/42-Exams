/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:41:51 by blax              #+#    #+#             */
/*   Updated: 2023/07/29 18:36:44 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_letter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int is_maj(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

void str_capitalizer(char *src)
{
    int i;
    int first_letter;

    i = 0;
    first_letter = 1;
    while (src[i])
    {
        if (src[i] && (src[i] == ' ' || src[i] == '\t'))
            first_letter = 1;
        if (src[i] && src[i] != ' ' && src[i] != '\t')
        {
            if (first_letter)
            {
                if (is_letter(src[i]) && !is_maj(src[i]))
                   src[i] -= 32;
                first_letter = 0;
            }
            else if (is_letter(src[i]) && !first_letter)
            {
                if (is_maj(src[i]))
                    src[i] += 32;
            }
        }
        ft_putchar(src[i]);
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc != 1)
    {
        while (argv[i])
        {
            str_capitalizer(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return (0);
}