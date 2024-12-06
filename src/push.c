/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:29:49 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/06 22:16:15 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	push_a(int *stack_a, int *stack_b)
{
	if(stack_b == 0)
		return ;
	if(stack_b)
		stack_a[0] = stack_b[0];
}

void	push_b(int *stack_a, int *stack_b)
{
	if(stack_a == 0)
		return ;
	if(stack_a)
		stack_b[0] = stack_a[0];
}
