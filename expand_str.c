/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:19:21 by blax              #+#    #+#             */
/*   Updated: 2023/07/29 16:19:25 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')   // Ignorer les espaces et les tabulations au début
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t')   // Si le caractère est un mot, l'écrire
            {
                write(1, &argv[1][i], 1);
            }
            if (argv[1][i] == ' ' || argv[1][i] == '\t')   // Si c'est un espace ou une tabulation
            {
                while (argv[1][i] == ' ' || argv[1][i] == '\t')   // Sautez tous les espaces et tabulations consécutifs
                    i++;
                if (argv[1][i])   // Si ce n'est pas la fin de la chaîne, écrire trois espaces
                {
                    write(1, "   ", 3);
                    continue;   // Continuez pour ne pas augmenter i deux fois
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
