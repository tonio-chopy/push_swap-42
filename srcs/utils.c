/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 07:02:34 by alaualik          #+#    #+#             */
/*   Updated: 2025/01/01 07:02:45 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *a)
{
    size_t i;

    if (a->end - a->start <= 1)
        return (1);
    i = a->start;
    while (i < a->end - 1)
    {
        if (a->stack[i] > a->stack[i + 1])
            return (0);
        i++;
    }
    return (1);
}

int get_n_bit(int num, size_t n)
{
    return ((num >> n) & 1);
}

int get_min_index(t_stack *s)
{
    int i;
    int min;
    int min_index;

    i = s->end - 1;
    min = s->stack[i];
    min_index = i;
    while (i >= (int)s->start)
    {
        if (s->stack[i] < min)
        {
            min = s->stack[i];
            min_index = i;
        }
        i--;
    }
    return (min_index);
}

int is_in(int *arr, int len, int val)
{
    int i;

    i = 0;
    while (i < len)
    {
        if (arr[i] == val)
            return (1);
        i++;
    }
    return (0);
}
