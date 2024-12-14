/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:07:47 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/14 12:02:55 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_isdigit_str(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int i;
    long num;
    int *nums;
    int j;
    int is_duplicate;

    if (ac < 2)
    {
        printf("Error.\n");
        return (1);
    }

    nums = (int *)malloc((ac - 1) * sizeof(int));
    if (!nums)
    {
        printf("Error.\n");
        return (1);
    }

    i = 1;
    j = 0;
    while (i < ac)
    {
        if (!ft_isdigit_str(av[i]))
        {
            free(nums);
            printf("Error.\n");
            return (1);
        }

        num = strtol(av[i], NULL, 10);

        if (num < INT_MIN || num > INT_MAX)
        {
            free(nums);
            printf("Error.\n");
            return (1);
        }

        is_duplicate = 0;
        int k = 0;
        while (k < j)
        {
            if (nums[k] == (int)num)
            {
                is_duplicate = 1;
                break;
            }
            k++;
        }

        if (is_duplicate)
        {
            free(nums);
            printf("Error.\n");
            return (1);
        }

        nums[j] = (int)num;
        j++;

        i++;
    }

    i = 0;
    while (i < j)
    {
        if (i > 0)
            printf(" - ");
        printf("%d", nums[i]);
        i++;
    }

    free(nums);
    printf("\n");

    return (0);
}
