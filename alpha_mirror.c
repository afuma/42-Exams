/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:11:17 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:12:46 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is a solution to the problem:
// This program is called alpha_mirror and it replaces each alphabetical character in the input string by the opposite alphabetical character.
// Here's how it works:
//     1. The main function checks if there is exactly one argument (aside from the program name itself). If there is, it loops through each character of the argument string.
//     2. For each character, it calls the alpha_mirror function, which checks if the character is an alphabetic letter (either lowercase or uppercase).
//     3. If the character is a lowercase letter (between 'a' and 'z'), it calculates the 'mirror' letter by subtracting the ASCII value of the letter from the ASCII value of 'z'.
// For example, if the letter is 'a', the 'mirror' letter is 'z' because 'z' - ('a' - 'a') = 'z'. If the letter is 'b', the 'mirror' letter is 'y' because 'z' - ('b' - 'a') = 'y'.
//     4. If the character is an uppercase letter (between 'A' and 'Z'), it calculates the 'mirror' letter in a similar way, but using 'Z' and 'A' instead of 'z' and 'a'.
//     5. If the character is not an alphabetic letter, the alpha_mirror function simply returns the original character.
//     6. The main function then outputs the 'mirror' character by calling the ft_putchar function.
//     7. After all characters in the argument string have been processed, the main function outputs a newline character.

#include <unistd.h>

void    ft_putchar(char c)
{
   write(1, &c, 1);
}

char    alpha_mirror(char c)
{
   if ('a' <= c && c <= 'z')
       return ('z' - (c - 'a'));
   else if ('A' <= c && c <= 'Z')
       return ('Z' - (c - 'A'));
   else
       return c;
}

int     main(int argc, char **argv)
{
   int i;

   if (argc == 2)
   {
       i = 0;
       while (argv[1][i])
       {
           ft_putchar(alpha_mirror(argv[1][i]));
           i++;
       }
   }
   ft_putchar('\n');
   return (0);
}