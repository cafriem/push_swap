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
	stack->chunk_size = (stack->size / 5);
	stack->mid = (stack->size / 2);
	minandmin2(stack);
	close_checker(stack);
	chunk = stack->chunk_size;
	while (c < stack->size && stack->max_a != 0)
	{
		printf("size = %d num = %d chunk = %d\n", stack->size, stack->astack[0], chunk);
		if (c == chunk)
			chunk += stack->chunk_size;
		if (stack_check(stack, chunk) == 1)
		{
			pb(stack);
			c++;
		}
		else if (stack_check(stack, chunk) == -1)
			ra(stack);
		printf("c = %d\n", c);
	}
	printf("%d %d %d %d %d", stack->bstack[0],stack->bstack[1],stack->bstack[2],stack->bstack[3],stack->bstack[4]);
	lchunker(stack, chunk, c);
}
