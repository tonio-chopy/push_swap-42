/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:29:49 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/07 15:45:45 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	push_a(int *stack_a, int *stack_b, int size)
{
	int	i;

	if(!stack_b || stack_b == 0)
		return ;
	i = size - 1;
	while(i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
}

void	push_b(int *stack_a, int *stack_b, int size)
{
	int	i;

	if(!stack_a || stack_a == 0)
		return ;
	i = size - 1;
	while(i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
}

