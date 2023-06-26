/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:24:21 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:24:23 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void reverse_bits(unsigned char octet)
{
   int i;
   unsigned char bit;

   i = 8;
   while (i--)
   {
       bit = (octet & 1) + '0';
       write(1, &bit, 1);
       octet = octet >> 1;
   }
}

int main(void)
{
   reverse_bits(10);
   return (0);
}
