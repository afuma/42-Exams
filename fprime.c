/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:13:18 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:19:45 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    fprime(unsigned int nb)
{
   unsigned int    div;

   if (nb == 1)
       printf("1");
   else
   {
       div = 2;
       while (nb > 1)
       {
           if (nb % div == 0)
           {
               printf("%u", div);
               nb = nb / div;
               if (nb > 1)
                   printf("*");
           }
           else
               div++;
       }
   }
   printf("\n");
}

int main(int argc, char **argv)
{
   if (argc == 2)
       fprime(atoi(argv[1]));
   else
       printf("\n");
   return (0);
}