/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:55:26 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/06 11:14:07 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pa(int *stack_a, int *stack_b)
{
	int	temp;

	if(!stack_b || !stack_b[0])
		return ;
	if(stack_a && stack_b)
	{
		temp = stack_b[0];
		stack_b[0] = stack_a[0];
	}
}
