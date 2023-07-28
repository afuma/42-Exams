/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:42:37 by blax              #+#    #+#             */
/*   Updated: 2023/07/28 17:46:56 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void first_word(char *str)
{
    int i;

    i = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    while (str[i] && (str[i] != ' ' && str[i] != '\t'))
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        first_word(argv[1]);
    ft_putchar('\n');
    return (0);
}