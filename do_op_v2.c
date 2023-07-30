/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:59:39 by blax              #+#    #+#             */
/*   Updated: 2023/07/30 18:08:40 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 17h58
#include <stdio.h>
#include <stdlib.h>

int ft_do_op(int a, char *operator, int b)
{
    if (operator[0] == '+')
        return (a + b);
    if (operator[0] == '-')
        return (a - b);
    if (operator[0] == '*')
        return (a * b);
    if (operator[0] == '/')
        return (a / b);
    if (operator[0] == '%')
        return (a % b);
}

int main(int argc, char *argv[])
{
    if (argc == 4)
        printf("%d\n", ft_do_op(atoi(argv[1]), argv[2], atoi(argv[3])));
    else
        printf("\n");
    return (0);
}