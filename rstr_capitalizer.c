/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:52:31 by blax              #+#    #+#             */
/*   Updated: 2023/07/28 17:47:46 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_letter(char c)
{
    if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
        return (1);
    return (0);
}

int is_maj(char c)
{
    if (c <= 'Z' && c >= 'A')
        return (1);
    return (0);
}

void rstr_capitalizer(char *str)
{
    int i;
    int end_letter;

    end_letter = 0;
    i = 0;
    while (str[i+1])
    {
        if (str[i] && str[i] == ' ' || str[i] == '\t')
            ft_putchar(str[i]);
        if (str[i] && str[i] != ' ' && str[i] != '\t'
            && (str[i + 1] == ' ' || str[i + 1] == '\t'))
        {
            end_letter = 1;
            if (is_letter(str[i]) && !is_maj(str[i]) && end_letter)
                ft_putchar(str[i] - 32);
            else
                ft_putchar(str[i]);
            end_letter = 0;
        }
        if (str[i] && str[i] != ' ' && str[i] != '\t'
            && (str[i + 1] != ' ' && str[i + 1] != '\t'))
        {
            if (is_letter(str[i]) && is_maj(str[i]) && !end_letter)
                ft_putchar(str[i] + 32);
            else
                ft_putchar(str[i]);
        }
        i++;
    }
    if (str[i + 1] == '\0')
    {
        if (is_letter(str[i]) && !is_maj(str[i]))
            ft_putchar(str[i] - 32);
        else
            ft_putchar(str[i]);
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
            rstr_capitalizer(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return (0);
}