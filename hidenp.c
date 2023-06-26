/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:21:16 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:21:50 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// voici la version qui ressemble le plus a wdmatch
#include <unistd.h>

void    hidenp(char *s1, char *s2)
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
       write(1, "1", 1);
   }
   else
   {
       write(1, "0", 1);
   }
}

int     main(int argc, char **argv)
{
   if (argc == 3)
   {
       hidenp(argv[1], argv[2]);
   }
   write(1, "\n", 1);
   return (0);
}


// Voici une autre version:

// #include <unistd.h>
// void    ft_putchar(char c)
// {
//    write(1, &c, 1);
// }

// int     hidenp(char *s1, char *s2)
// {
//    while (*s1 && *s2)
//    {
//        if (*s1 == *s2)
//            s1++;
//        s2++;
//    }
//    if (*s1 == '\0')
//        return (1);
//    else
//        return (0);
// }

// int     main(int argc, char **argv)
// {
//    if (argc == 3)
//        ft_putchar(hidenp(argv[1], argv[2]) + '0');
//    ft_putchar('\n');
//    return (0);
// }

Voici comment ce programme fonctionne :
    1. La fonction main vérifie s'il y a exactement deux arguments (outre le nom du programme lui-même). Si c'est le cas, elle appelle la fonction hidenp.
    2. La fonction hidenp parcourt les deux chaînes de caractères simultanément. Pour chaque caractère dans la deuxième chaîne, si ce caractère est le même que le caractère actuel dans la première chaîne, alors on avance dans la première chaîne. Quoi qu'il en soit, on avance toujours dans la deuxième chaîne.
    3. Si on atteint la fin de la première chaîne (c'est-à-dire si tous ses caractères ont été trouvés dans la deuxième chaîne, dans le bon ordre), alors on retourne 1. Sinon, on retourne 0.
    4. La fonction main affiche le résultat de la fonction hidenp (converti en caractère avec '0' pour obtenir le caractère '1' ou '0'), suivi d'un retour à la ligne.
Donc, ce programme affiche 1 si la première chaîne de caractères est "cachée" dans la deuxième, c'est-à-dire si on peut trouver tous les caractères de la première chaîne dans la deuxième, dans le même ordre. Sinon, il affiche 0.
