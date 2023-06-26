/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:22:03 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:22:44 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Voici comment ce programme fonctionne :
//     1. La fonction main vérifie s'il y a exactement deux arguments (outre le nom du programme lui-même). Si c'est le cas, elle appelle la fonction inter.
//     2. La fonction inter parcourt chaque caractère de la première chaîne de caractères.
//     3. Pour chaque caractère, elle appelle la fonction check_double qui vérifie si le caractère a déjà été vu dans la première chaîne de caractères jusqu'à l'index actuel. Si c'est le cas, check_double retourne 0 et le caractère est ignoré.
//     4. Si le caractère n'a pas encore été vu, la fonction inter parcourt la deuxième chaîne de caractères et vérifie si le caractère apparaît dans celle-ci.
//     5. Si le caractère apparaît dans la deuxième chaîne, il est affiché à l'aide de la fonction write.
//     6. Après avoir traité tous les caractères de la première chaîne, la fonction main affiche un caractère de retour à la ligne.
// Donc, ce programme affiche les caractères qui apparaissent dans les deux chaînes, sans doublons et dans l'ordre où ils apparaissent dans la première chaîne.

#include <unistd.h>

int     check_double(char *str, char c, int index)
{
   int i;

   i = 0;
   while (i < index)
   {
       if (str[i] == c)
           return (0);
       i++;
   }
   return (1);
}

void    inter(char *s1, char *s2)
{
   int i;
   int j;

   i = 0;
   while (s1[i])
   {
       if (check_double(s1, s1[i], i))
       {
           j = 0;
           while (s2[j])
           {
               if (s1[i] == s2[j])
               {
                   write(1, &s1[i], 1);
                   break;
               }
               j++;
           }
       }
       i++;
   }
}

int     main(int argc, char **argv)
{
   if (argc == 3)
       inter(argv[1], argv[2]);
   write(1, "\n", 1);
   return (0);
}