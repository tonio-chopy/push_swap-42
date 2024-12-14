/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:44:30 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/14 12:59:32 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int value;
    struct s_stack *next;
} t_stack;

void swap_a(t_stack **a)
{
    if (*a && (*a)->next)
	{
        t_stack *first = *a;
        t_stack *second = (*a)->next;

        first->next = second->next;
        second->next = first;
        *a = second;
    }
}

void push(t_stack **a, int value)
{
    t_stack *new_node = malloc(sizeof(t_stack));
    new_node->value = value;
    new_node->next = *a;
    *a = new_node;
}

void print_stack(t_stack *a)
{
    while (a)
	{
        printf("%d ", a->value);
        a = a->next;
    }
    printf("\n");
}

int main()
{
    t_stack *a = NULL;

    push(&a, 3);
    push(&a, 2);
    push(&a, 1);

    printf("Stack before swap_a: ");
    print_stack(a);

    swap_a(&a);

    printf("Stack after swap_a: ");
    print_stack(a);

    return 0;
}

