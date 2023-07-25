/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_v3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:46:22 by blax              #+#    #+#             */
/*   Updated: 2023/07/25 21:46:25 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char rotate(char c, char min, char max)
{
    if (c >= min + 13 && c <= max)
        return (min + 13 - (max - c) - 1);
    else if (c >= min && c <= min + 13)
        return (c + 13);
    else
        return (c);
}

char *rot_13(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        str[i] = rotate(str[i], 'a', 'z');
        str[i] = rotate(str[i], 'A', 'Z');
        ft_putchar(str[i]);
        i++;
    }
    return (str);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        rot_13(argv[1]);
    ft_putchar('\n');
    return (0);
}
