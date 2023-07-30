/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:49:39 by blax              #+#    #+#             */
/*   Updated: 2023/07/30 18:42:17 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 18h10
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int is_blank(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

int left_trim(char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (str[i] && is_blank(str[i]))
        i--;
    return (i);
}

void ft_epur_str(char *str)
{
    int i;
    int first_space;
    int end;

    first_space = 0;
    i = 0;
    end = left_trim(str);
    if (!is_blank(str[end]))
        end++;
    while (str[i] && i < end)
    {
        if (str[i] && i < end && is_blank(str[i]))
        {
            if (first_space)
            {
                ft_putchar(' ');
                first_space = 0;
            }
        }
        if (str[i] && i < end && !is_blank(str[i]) && !first_space)
            first_space = 1;
        if (str[i] && i < end && !is_blank(str[i]))
            ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        ft_epur_str(argv[1]);
    ft_putchar('\n');
    return (0);
}