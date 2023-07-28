/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:52:31 by blax              #+#    #+#             */
/*   Updated: 2023/07/28 17:46:31 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_maj(char c)
{
    if (c <= 'Z' && c >= 'A')
        return (1);
    return (0);
}

void camel_to_snake(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        while (str[i] && !is_maj(str[i]))
        {
            ft_putchar(str[i]);
            i++;
        }
        if (str[i] && is_maj(str[i]))
        {
            ft_putchar('_');
            ft_putchar(str[i] + 32);
        }
        if (str[i])
            i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        camel_to_snake(argv[1]);
    ft_putchar('\n');
    return (0);
}