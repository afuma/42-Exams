/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_v2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:52:58 by blax              #+#    #+#             */
/*   Updated: 2023/07/25 21:43:56 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rotate(char *c, char min, char max)
{
    if (*c >= min + 13 && *c <= max)
        *c = min + 13 - (max - *c) - 1;
    else if (*c >= min && *c <= min + 13)
        *c += 13;
}

char *rot_13(char *str)
{
    char *tmp;

    tmp = str;
    while (*str)
    {
        rotate(str, 'a', 'z');
        rotate(str, 'A', 'Z');
        ft_putchar(*str);
        str++;
    }
    return (tmp);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        rot_13(argv[1]);
    ft_putchar('\n');
    return (0);
}
