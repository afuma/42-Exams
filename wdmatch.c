/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:29:28 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:30:29 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This program works by iterating over the characters in the second string (s2). 
// For each character, it checks if it matches the current character in the first string (s1).
//  If it does, it advances to the next character in s1. 
//  When the loop is finished, it checks if it has matched all characters in s1.
//   If it has (that is, if it has reached the null terminator in s1), it prints s1.

//    If it hasn't, it doesn't print anything. In any case, it ends by printing a newline.
// This code makes use of the fact that strings in C are null-terminated.
//  The expression !s1[j] checks if s1[j] is the null character ('\0'), 
//  which is equivalent to 0 and therefore falsy. 
//  If s1[j] is not the null character, !s1[j] is 0, or false. 
//  So, if (!s1[j]) checks if s1[j] is the end of the string.

#include <unistd.h>

void    wdmatch(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s2[i])
    {
        if (s2[i] == s1[j])
            j++;
        i++;
    }

    if (!s1[j])
    {
        write(1, s1, j);
    }
}

int     main(int argc, char **argv)
{
    if (argc == 3)
    {
        wdmatch(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return (0);
}