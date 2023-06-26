/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:24:38 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:24:40 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     pgcd(int a, int b)
{
   if (b == 0)
       return a;
   else
       return pgcd(b, a % b);
}

int     main(int argc, char **argv)
{
   if (argc == 3)
   {
       printf("%d\n", pgcd(atoi(argv[1]), atoi(argv[2])));
   }
   else
   {
       printf("\n");
   }
   return 0;
}
