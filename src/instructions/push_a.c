/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 21:02:03 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/14 21:05:02 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int value;
    struct s_stack *next;
} t_stack;

void push(t_stack **stack, int value)
{
    t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
    if (!new_node)
	{
        perror("Malloc failed");
        return;
    }
    new_node->value = value;
    new_node->next = *stack;
    *stack = new_node;
}

int pop(t_stack **stack)
{
    if (*stack == NULL)
        return -1;
    t_stack *temp = *stack;
    int value = temp->value;
    *stack = (*stack)->next;
    free(temp);
    return value;
}

void push_a(t_stack **stack_a, t_stack **stack_b)
{
    if (*stack_b == NULL)
        return;
    int value = pop(stack_b);
    push(stack_a, value);
}

void print_stack(t_stack *stack)
{
    t_stack *current = stack;
    while (current != NULL)
	{
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    t_stack *stack_a = NULL;
    t_stack *stack_b = NULL;

    push(&stack_b, 10);
    push(&stack_b, 20);
    push(&stack_b, 30);

    printf("Stack A before push_a: ");
    print_stack(stack_a);
    printf("Stack B before push_a: ");
    print_stack(stack_b);

    push_a(&stack_a, &stack_b);

    printf("Stack A after push_a: ");
    print_stack(stack_a);
    printf("Stack B after push_a: ");
    print_stack(stack_b);

    return 0;
}

