/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapshort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:28:15 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/20 15:58:56 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack *stack)
{
	if (stack->astack[0] > stack->astack[1])
		sa(stack);
}

void	sort3(t_stack *stack)
{
	if (stack->astack[0] < stack->astack[1])
	{
		if (stack->astack[1] > stack->astack[2])
			rra(stack);
		if (stack->astack[0] > stack->astack[1])
			sa(stack);
	}
	if (stack->astack[0] > stack->astack[1])
	{
		if (stack->astack[0] > stack->astack[2])
			ra(stack);
		if (stack->astack[0] > stack->astack[1])
			sa(stack);
	}
}

void	sort4(t_stack *stack)
{
	if (stack->astack[3] == stack->min)
		rra(stack);
	if (stack->astack[2] == stack->min)
		ra(stack);
	if (stack->astack[1] == stack->min)
		sa(stack);
	pb(stack);
	sort3(stack);
	pa(stack);
}

void	sort5(t_stack *stack)
{
	int	c;
	int	min2;

	c = 0;
	if (stack->astack[c] != stack->min)
		min2 = stack->astack[c];
	else
		min2 = stack->astack[c + 1];
	while (c < stack->a_size)
	{
		if (stack->astack[c] != stack->min && stack->astack[c] < min2)
			min2 = stack->astack[c];
		c++;
	}
	if (stack->astack[2] == stack->min)
		ra(stack);
	if (stack->astack[1] == stack->min)
		ra(stack);
	if (stack->astack[3] == stack->min)
		rra(stack);
	if (stack->astack[4] == stack->min)
		rra(stack);
	pb(stack);
	if (stack->astack[2] == min2)
		ra(stack);
	if (stack->astack[1] == min2)
		ra(stack);
	if (stack->astack[3] == min2)
		rra(stack);
	pb(stack);
	sort3(stack);
	pa(stack);
	pa(stack);
}

// 3 4 2 1 5
//4 1 2 5
//3 1 2 4 
// printf("before = %d %d %d %d\n", stack.astack[0], stack.astack[1], stack.astack[2], stack.astack[3]);
