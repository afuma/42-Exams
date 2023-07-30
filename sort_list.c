/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blax <blax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:49:39 by blax              #+#    #+#             */
/*   Updated: 2023/07/30 19:18:29 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

// Fonction de comparaison pour le tri (exemple)
int cmp(int a, int b) {
    return a > b; // Tri croissant
}

int     list_size(t_list *begin_list)
{
    int count;

    count = 0;
    while (begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return (count);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *tmp;
    int     swapped;
    int     i;
    int     j;
    int     size;
    int     buffer;

    if (!lst || !cmp || !(size = list_size(lst)))
        return (lst);
    i = -1;
    while (++i < size - 1)
    {
        tmp = lst;
        j = -1;
        swapped = 0;
        while (++j < size - i - 1)
        {
            if (!cmp(tmp->data, tmp->next->data))
            {
                buffer = tmp->data;
                tmp->data = tmp->next->data;
                tmp->next->data = buffer;
                swapped = 1;
            }
            tmp = tmp->next;
        }
        if (!swapped)
            break ;
    }
    return (lst);
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        // Créer une liste chaînée avec les valeurs d'entrée
        t_list *lst = NULL;
        for (int i = 0; argv[1][i] != '\0'; i++) {
            int value = argv[1][i] - '0'; // Convertir le caractère en entier (ex: '3' devient 3)
            list_push_back(&lst, value);
        }

        // Tri de la liste
        lst = sort_list(lst, &cmp);

        // Affichage de la liste triée
        t_list *current = lst;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");

        // Libération de la mémoire
        list_clear(&lst);
    } else {
        printf("Utilisation: %s <liste de nombres>\n", argv[0]);
    }

    return 0;
}
