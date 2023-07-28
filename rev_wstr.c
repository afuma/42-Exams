/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:57:00 by blax              #+#    #+#             */
/*   Updated: 2023/07/28 17:47:17 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void print_buffer(char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (str[i] && i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
}

void ft_bzero(char *buff)
{
    int i;

    i = 0;
    while (buff[i])
    {
        buff[i] = '\0';
        i++;
    }
}

void rstr_capitalizer(char *str)
{
    int i;
    int j;
    char buffer[255] = {0};

    i = ft_strlen(str) - 1;
    j = 0;
    while (str[i] && i >=0)
    {
        while (str[i] && i >=0 && str[i] != ' ' && str[i] != '\t')
        {
            buffer[j++] = str[i];
            i--;
        }
        print_buffer(buffer);
        ft_bzero(buffer);
        if (i != -1)
            ft_putchar(' ');
        j = 0;
        i--;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        rstr_capitalizer(argv[1]);
    ft_putchar('\n');
    return (0);
}