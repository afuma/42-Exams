/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:23:41 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:24:03 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Voici comment ce programme fonctionne :
//     1. La fonction main vérifie s'il y a exactement un argument (outre le nom du programme lui-même). Si c'est le cas, elle appelle la fonction last_word.
//     2. La fonction last_word parcourt chaque caractère de la chaîne de caractères.
//     3. Si le caractère actuel est un espace ou une tabulation et que le caractère suivant n'est ni un espace, ni une tabulation, ni la fin de la chaîne, alors nous avons trouvé le début d'un nouveau mot. Nous mettons à jour la variable start pour pointer sur le début de ce mot.
//     4. Si le caractère actuel n'est ni un espace, ni une tabulation, et que le caractère suivant est un espace, une tabulation ou la fin de la chaîne, alors nous avons trouvé la fin d'un mot. Nous mettons à jour la variable end pour pointer sur la fin de ce mot.
//     5. Après avoir parcouru toute la chaîne, start et end pointent respectivement sur le début et la fin du dernier mot de la chaîne.
//     6. La fonction last_word affiche ensuite chaque caractère du dernier mot en utilisant la fonction write.
//     7. Enfin, la fonction main affiche un caractère de retour à la ligne.
// Donc, ce programme affiche le dernier mot d'une chaîne de caractères, où un mot est défini comme une section de la chaîne délimitée par des espaces ou des tabulations, ou par le début ou la fin de la chaîne.

#include <unistd.h>

void    last_word(char *str)
{
   int i;
   int start;
   int end;

   i = 0;
   start = 0;
   end = 0;
   while (str[i])
   {
       if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0')
           start = i + 1;
       if (str[i] != ' ' && str[i] != '\t' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
           end = i;
       i++;
   }
   while (start <= end)
   {
       write(1, &str[start], 1);
       start++;
   }
}

int     main(int argc, char **argv)
{
   if (argc == 2)
       last_word(argv[1]);
   write(1, "\n", 1);
   return (0);
}