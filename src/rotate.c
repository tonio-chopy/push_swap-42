/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 22:16:37 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/06 22:40:12 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rotate_a(int *stack_a, int size)
{
	int	i;
	int	first;
	
	if(size <= 1)
		return ;
	first = stack_a[0];
	i = 0;
	while(i < size - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[size - 1] = first;
}

void	rotate_b(int *stack_b, int size)
{
	int	i;
	int	first;

	if(size <= 1)
		return ;
	first = stack_b[0];
	i = 0;
	while(i < size - 1)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[size - 1] = first;
}

void	rr(int *stack_a, int *stack_b, int size)
{
	rotate_a(stack_a, size);
	rotate_b(stack_b, size);
}
