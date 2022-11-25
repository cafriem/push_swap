/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swaplong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:35:55 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/25 17:31:01 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort100(t_stack *stack)
{
	int	c;
	int	c1;
	int	chunk;

	c = 0;
	c1 = 0;
	stack->chunk_size = abs(stack->size / 5);
	stack->mid = abs(stack->size / 2);
	minandmin2(stack);
	close_checker(stack);
	chunk = stack->chunk_size;
	while (c < stack->size)
	{
		while (c < chunk)
		{
			c1 = 0;
			if ()
			rra(stack);
			c++;
		}
	}
}
