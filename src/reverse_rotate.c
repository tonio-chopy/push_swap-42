/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:46:08 by alaualik          #+#    #+#             */
/*   Updated: 2024/12/07 16:03:39 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reverse_rotate_a(int *stack_a, int size)
{
	int	i;
	int	last;

	if(size <= 1)
		return ;
	last = stack_a[size - 1];
	i = 0;
	while(i > size - 1)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = last;
}

void	reverse_rotate_b(int *stack_b, int size)
{
	int	i;
	int	last;

	if(size <= 1)
		return ;
	last = stack_b[size - 1];
	i = 0;
	while(i > size - 1)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = last;
}

void	rrr(int *stack_a, int *stack_b, int size)
{
	reverse_rotate_a(stack_a, size);
	reverse_rotate_b(stack_b, size);
}
