/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swaplong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:35:55 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/28 14:47:23 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort100(t_stack *stack)
{
	int	c;
	int	chunk;

	c = 0;
	stack->chunk_size = abs(stack->size / 5);
	stack->mid = abs(stack->size / 2);
	minandmin2(stack);
	close_checker(stack);
	chunk = stack->chunk_size;
	while (c < stack->size)
	{
		if (c == chunk)
			chunk += stack->chunk_size;
		if (stack_check(stack, chunk) == 1)
		{
			pb(stack);
			c++;
		}
		if (stack_check(stack, chunk) == -1)
			rra(stack);
	}
	printf("%d %d %d %d %d", stack->bstack[3],stack->bstack[4],stack->bstack[5],stack->bstack[6],stack->bstack[7]);
}
