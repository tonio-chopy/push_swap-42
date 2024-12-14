/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:44:57 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/14 12:50:37 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

typedef struct Node
{
    int value;
    struct Node* next;
} Node;

int is_duplicate(Node* stack, int value)
{
    Node* current = stack;
    while (current)
	{
        if (current->value == value)
            return 1;
        current = current->next;
    }
    return 0;
}

void push(Node** stack, int value)
{
    Node* new_node = malloc(sizeof(Node));
    if (!new_node)
	{
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    new_node->value = value;
    new_node->next = *stack;
    *stack = new_node;
}

void free_stack(Node* stack)
{
    Node* temp;
    while (stack)
	{
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}

void parse_and_push(Node** stack, char* input)
{
    char* token = strtok(input, " ");
    while (token != NULL)
	{
        char* end;
        long num = strtol(token, &end, 10);

        if (*end != '\0' || num < INT_MIN || num > INT_MAX)
		{
            printf("Error\n");
            free_stack(*stack);
            exit(1);
        }

        int value = (int)num;

        if (is_duplicate(*stack, value))
		{
            printf("Error\n");
            free_stack(*stack);
            exit(1);
        }
        push(stack, value);
        token = strtok(NULL, " ");
    }
}

int main(int argc, char* argv[])
{
    if (argc < 2)
        return 1;
    Node* stack = NULL;

    for (int i = 1; i < argc; i++)
	{
        char* arg = argv[i];
        if (arg[0] == '"' && arg[strlen(arg) - 1] == '"')
		{
            arg[strlen(arg) - 1] = '\0';
            parse_and_push(&stack, arg + 1);
        }
		else
            parse_and_push(&stack, arg);
    }

    Node* current = stack;
    int* values = malloc(sizeof(int) * argc);
    int i = 0;
    while (current)
	{
        values[i++] = current->value;
        current = current->next;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d ", values[j]);
    printf("\n");

    free(values);
    free_stack(stack);
    return 0;
}

