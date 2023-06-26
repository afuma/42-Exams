/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:20:00 by edesaint          #+#    #+#             */
/*   Updated: 2023/06/26 22:20:17 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://github.com/jraleman/42.Exam-C/blob/master/level03/ft_range.c

#include <stdlib.h>

int     *ft_range(int start, int end)
{
   int     *range;
   int     i;

   if (start > end)
       range = (int *)malloc(sizeof(int) * (start - end) + 1);
   else
       range = (int *)malloc(sizeof(int) * (end - start) + 1);
   i = 0;
   while (start != end)
   {
       range[i++] = start;
       start += (start > end) ? -1 : 1;
   }
   range[i] = start;
   return (range);
}