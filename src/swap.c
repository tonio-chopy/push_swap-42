/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:44:30 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/06 22:16:12 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_a(int *stack_a)
{
	int	temp;
	
	if(!stack[0] || !stack[1])
		return ;
	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
}

void	swap_b(int *stack_b)
{
	int	temp;
	
	if(!stack[0] || !stack[1])
		return ;
	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
}

void	ss(int *stack_a, int *stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}
