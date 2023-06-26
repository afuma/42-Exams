/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:25:14 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:26:28 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}

// Votre code actuel est déjà assez optimisé en termes de lisibilité et d'efficacité. 
// Il utilise l'opération de décalage de bits pour inverser les bits d'un octet. 
// Cependant, si vous recherchez une version légèrement plus compacte et rapide, 
// vous pouvez utiliser une boucle pour éliminer la redondance. 
// Voici comment vous pouvez le faire :

unsigned char   reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    unsigned int size = 8;

    while (size--)
    {
        result = (result << 1) | (octet & 1);
        octet >>= 1;
    }

    return result;
}

// Dans ce code, nous utilisons une boucle pour décaler successivement chaque bit de
// l'octet vers le bas. À chaque itération, nous décalons le bit le plus bas de l'octet
//  dans le bit le plus haut du résultat. 
//  Cela a pour effet de renverser l'ordre des bits.
// Une fois que tous les bits ont été décalés, nous retournons le résultat.
// Cependant, veuillez noter que cette optimisation peut ne pas améliorer les performances de manière significative, car le compilateur peut déjà optimiser le code original de manière similaire. La lisibilité du code est souvent plus importante que de petites optimisations de performances, sauf dans les cas où les performances sont critiques.

// —----------------------------------------------------------------------------------------------------------------------------------------

// donne moi un exemple concret explique pas a pas en dessinant du code precedent

// Supposons que notre octet est `10110011`. Nous voulons renverser cet octet, ce qui signifie que nous voulons obtenir `11001101`.

// Voici comment le code fonctionne, étape par étape :

// 1. Nous commençons avec `result = 0` et `octet = 10110011`.

// 2. Dans la première itération de la boucle, nous décalons `result` à gauche de 1 bit, ce qui donne toujours `00000000` car `result` est initialement 0. Ensuite, nous prenons le ET logique entre `octet` et `1` (`10110011 & 00000001`), ce qui donne `00000001` (le dernier bit de `octet`). Nous prenons le OU logique entre `result` et ce dernier bit, ce qui donne `00000001`. Puis nous décalons `octet` à droite de 1 bit, ce qui donne `01011001`.

// 3. Dans la deuxième itération de la boucle, nous décalons `result` à gauche de 1 bit, ce qui donne `00000010`. Nous prenons le ET logique entre `octet` et `1` (`01011001 & 00000001`), ce qui donne `00000001`. Nous prenons le OU logique entre `result` et ce dernier bit, ce qui donne `00000011`. Puis nous décalons `octet` à droite de 1 bit, ce qui donne `00101100`.

// 4. Nous répétons ces étapes jusqu'à ce que nous ayons traité tous les bits de `octet`. À la fin, `result` sera `11001101`, qui est l'octet original `10110011` renversé.

// Voici un résumé visuel de ce qui se passe :

// ```
// Iteration 1:
//     result = 00000000 << 1 | (10110011 & 00000001) = 00000001
//     octet  = 10110011 >> 1 = 01011001

// Iteration 2:
//     result = 00000001 << 1 | (01011001 & 00000001) = 00000011
//     octet  = 01011001 >> 1 = 00101100

// ...
// Iteration 8:
//     result = 11001100 << 1 | (00000001 & 00000001) = 11001101
//     octet  = 00000001 >> 1 = 00000000
// ```

