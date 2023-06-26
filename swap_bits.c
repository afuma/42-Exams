/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:33:35 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:38:16 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
  return ((octet >> 4) | (octet << 4));
}

// Cette version de la fonction fait la même chose que la précédente,
//  mais avec une protection supplémentaire contre les débordements de bits potentiels.
unsigned char swap_bits(unsigned char octet)
{
  return ((octet >> 4 & 0x0F) | (0xF0 & octet << 4));
}
