/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:26:46 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:27:57 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;
	int	ascii[256] = {0};

	i = 0;
	while (s1[i])
	{
		if (ascii[(int)s1[i]] == 0)
		{
			ascii[(int)s1[i]] = 1;
			write(1, &s1[i], 1);
		}
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (ascii[(int)s2[j]] == 0)
		{
			ascii[(int)s2[j]] = 1;
			write(1, &s2[j], 1);
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

// Notez que le tableau `ascii` est initialisé à `0` pour tous les indices. 
// Lorsqu'un caractère est trouvé dans l'une ou l'autre des chaînes, 
// nous mettons l'indice correspondant à ce caractère à `1` dans le tableau `ascii`.
//  Avant d'afficher un caractère, nous vérifions si son indice est `0` dans le tableau `ascii`.
//  Si c'est le cas, nous l'affichons et mettons son indice à `1`. 
//  Si ce n'est pas le cas, nous passons simplement à autre chose, 
//  car cela signifie que le caractère a déjà été affiché.

// La fonction `main` vérifie si le nombre d'arguments est correct. 
// Si c'est le cas, elle appelle `ft_union` avec les deux chaînes passées en argument.
//  Enfin, elle affiche un saut de ligne, quel que soit le nombre d'arguments.

// —------------------------------------------------------------------------------------------------------------------------------
// explique moi le "ascii[(int)s1[i]] == 0" dans le programme precedent. Comment le tableau ascii peut prendre s1[i] alors qu'il vaut zero ?

// La ligne `ascii[(int)s1[i]] == 0` est en fait une vérification pour savoir si le caractère `s1[i]` a déjà été rencontré auparavant.

// En C, un `char` est essentiellement un petit entier, et chaque caractère est associé à un nombre entier unique selon la table de caractères ASCII. Par exemple, le caractère 'a' est associé à l'entier 97, 'b' à 98, et ainsi de suite.

// Le tableau `ascii` dans le programme a une taille de 256, ce qui est suffisant pour couvrir toutes les valeurs possibles d'un `char` en C (qui va de 0 à 255). Au début, toutes les valeurs dans le tableau `ascii` sont initialisées à 0, ce qui signifie qu'aucun caractère n'a encore été rencontré.

// Lorsque vous faites `ascii[(int)s1[i]]`, vous utilisez la valeur entière du caractère `s1[i]` comme indice dans le tableau `ascii`. Si le caractère `s1[i]` n'a pas encore été rencontré, alors `ascii[(int)s1[i]]` sera 0. Si le caractère a déjà été rencontré, alors `ascii[(int)s1[i]]` sera 1.

// Lorsqu'un caractère est rencontré pour la première fois, le programme écrit ce caractère à la sortie et met `ascii[(int)s1[i]]` à 1 pour indiquer que ce caractère a déjà été rencontré.

// Ainsi, le tableau `ascii` est utilisé pour suivre quels caractères ont déjà été rencontrés et écrits à la sortie. Chaque indice dans le tableau correspond à une valeur de caractère possible, et la valeur à cet indice est 1 si le caractère a déjà été rencontré, et 0 sinon.

// —----------------------------------------------------------------------------------------------------------------------------
// explique moi en dessinant et en prenant un exemple concret le code precedent

// D'accord, examinons le code étape par étape avec un exemple concret. Supposons que nos deux chaînes d'entrée soient `abc` et `bca`. 

// 1. Tout d'abord, nous initialisons un tableau `ascii` de 256 entiers à 0. Ce tableau représentera tous les caractères ASCII possibles, qui peuvent être mappés à des valeurs entières de 0 à 255.

// ```
//  ascii[0] = 0
//  ascii[1] = 0
//  ascii[2] = 0
//  ...
//  ascii[255] = 0
// ```

// 2. Nous commençons à parcourir la première chaîne caractère par caractère. Pour le premier caractère `'a'` dans `abc`, nous convertissons `'a'` en sa valeur ASCII qui est 97. Ensuite, nous vérifions si `ascii[97]` est égal à 0. Comme c'est le cas, nous écrivons le caractère `'a'` et mettons `ascii[97]` à 1.

// ```
//  ascii[0] = 0
//  ascii[1] = 0
//  ascii[2] = 0
//  ...
//  ascii[97] = 1 (for 'a')
//  ascii[98] = 0
//  ascii[99] = 0
//  ...
//  ascii[255] = 0
// ```

// 3. Nous faisons de même pour le caractère `'b'` (valeur ASCII 98) et pour le caractère `'c'` (valeur ASCII 99) dans `abc`.

// ```
//  asci—------------------------------------------------------------------------------------------------------------------------------
// explique moi le "ascii[(int)s1[i]] == 0" dans le programme precedent. Comment le tableau ascii peut prendre s1[i] alors qu'il vaut zero ?

// La ligne `ascii[(int)s1[i]] == 0` est en fait une vérification pour savoir si le caractère `s1[i]` a déjà été rencontré auparavant.

// En C, un `char` est essentiellement un petit entier, et chaque caractère est associé à un nombre entier unique selon la table de caractères ASCII. Par exemple, le caractère 'a' est associé à l'entier 97, 'b' à 98, et ainsi de suite.

// Le tableau `ascii` dans le programme a une taille de 256, ce qui est suffisant pour couvrir toutes les valeurs possibles d'un `char` en C (qui va de 0 à 255). Au début, toutes les valeurs dans le tableau `ascii` sont initialisées à 0, ce qui signifie qu'aucun caractère n'a encore été rencontré.

// Lorsque vous faites `ascii[(int)s1[i]]`, vous utilisez la valeur entière du caractère `s1[i]` comme indice dans le tableau `ascii`. Si le caractère `s1[i]` n'a pas encore été rencontré, alors `ascii[(int)s1[i]]` sera 0. Si le caractère a déjà été rencontré, alors `ascii[(int)s1[i]]` sera 1.

// Lorsqu'un caractère est rencontré pour la première fois, le programme écrit ce caractère à la sortie et met `ascii[(int)s1[i]]` à 1 pour indiquer que ce caractère a déjà été rencontré.

// Ainsi, le tableau `ascii` est utilisé pour suivre quels caractères ont déjà été rencontrés et écrits à la sortie. Chaque indice dans le tableau correspond à une valeur de caractère possible, et la valeur à cet indice est 1 si le caractère a déjà été rencontré, et 0 sinon.

// —----------------------------------------------------------------------------------------------------------------------------
// explique moi en dessinant et en prenant un exemple concret le code precedent

// D'accord, examinons le code étape par étape avec un exemple concret. Supposons que nos deux chaînes d'entrée soient `abc` et `bca`. 

// 1. Tout d'abord, nous initialisons un tableau `ascii` de 256 entiers à 0. Ce tableau représentera tous les caractères ASCII possibles, qui peuvent être mappés à des valeurs entières de 0 à 255.

// ```
//  ascii[0] = 0
//  ascii[1] = 0
//  ascii[2] = 0
//  ...
//  ascii[255] = 0
// ```

// 2. Nous commençons à parcourir la première chaîne caractère par caractère. Pour le premier caractère `'a'` dans `abc`, nous convertissons `'a'` en sa valeur ASCII qui est 97. Ensuite, nous vérifions si `ascii[97]` est égal à 0. Comme c'est le cas, nous écrivons le caractère `'a'` et mettons `ascii[97]` à 1.

// ```
//  ascii[0] = 0
//  ascii[1] = 0
//  ascii[2] = 0
//  ...
//  ascii[97] = 1 (for 'a')
//  ascii[98] = 0
//  ascii[99] = 0
//  ...
//  ascii[255] = 0
// ```

// 3. Nous faisons de même pour le caractère `'b'` (valeur ASCII 98) et pour le caractère `'c'` (valeur ASCII 99) dans `abc`.

// ```
//  ascii[0] = 0
//  ascii[1] = 0
//  ascii[2] = 0
//  ...
//  ascii[97] = 1 (for 'a')
//  ascii[98] = 1 (for 'b')
//  ascii[99] = 1 (for 'c')
//  ...
//  ascii[255] = 0
// ```

// 4. Ensuite, nous commençons à parcourir la deuxième chaîne `bca`. Pour le caractère `'b'`, nous voyons que `ascii[98]` est déjà à 1, ce qui signifie que nous avons déjà rencontré et écrit le caractère `'b'
i[0] = 0
//  ascii[1] = 0
//  ascii[2] = 0
//  ...
//  ascii[97] = 1 (for 'a')
//  ascii[98] = 1 (for 'b')
//  ascii[99] = 1 (for 'c')
//  ...
//  ascii[255] = 0
// ```

// 4. Ensuite, nous commençons à parcourir la deuxième chaîne `bca`. Pour le caractère `'b'`, nous voyons que `ascii[98]` est déjà à 1, ce qui signifie que nous avons déjà rencontré et écrit le caractère `'b'
