/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:30:41 by edesaint          #+#    #+#             */
/*   Updated: 2023/07/25 16:30:47 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    if (str == NULL)
        return NULL;

    int length = 0;
    while (str[length] != '\0') // Calculate the length of the string
        length++;

    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    return str;
}
