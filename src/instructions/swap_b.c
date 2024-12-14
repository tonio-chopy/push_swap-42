/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:01:19 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/14 13:02:48 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int value;
    struct s_stack *next;
} t_stack;

void swap_b(t_stack **b)
{
    if (*b && (*b)->next)
	{
        t_stack *first = *b;
        t_stack *second = (*b)->next;

        first->next = second->next;
        second->next = first;
        *b = second;
    }
}

void push(t_stack **b, int value)
{
    t_stack *new_node = malloc(sizeof(t_stack));
    new_node->value = value;
    new_node->next = *b;
    *b = new_node;
}

void print_stack(t_stack *b)
{
    while (b)
	{
        printf("%d ", b->value);
        b = b->next;
    }
    printf("\n");
}

int main()
{
    t_stack *b = NULL;

    push(&b, 6);
    push(&b, 5);
    push(&b, 4);

    printf("Stack before swap_b: ");
    print_stack(b);

    swap_b(&b);

    printf("Stack after swap_b: ");
    print_stack(b);

    return 0;
}

