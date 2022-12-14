/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_rr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:47:54 by cafriem           #+#    #+#             */
/*   Updated: 2022/12/13 15:18:28 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	num;
	int	c;

	c = stack->max_a - 1;
	num = stack->astack[c];
	while (c > 0)
	{
		stack->astack[c] = stack->astack[c - 1];
		c--;
	}
	stack->astack[0] = num;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	int	num;
	int	c;

	c = stack->max_b - 1;
	num = stack->bstack[c];
	while (c > 0)
	{
		stack->bstack[c] = stack->bstack[c - 1];
		c--;
	}
	stack->bstack[0] = num;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack stack)
{
	int	num;
	int	c;

	c = stack.max_a;
	num = stack.astack[c];
	while (c != 0)
	{
		stack.astack[c] = stack.astack[c - 1];
		c--;
	}
	stack.astack[0] = num;
	c = stack.max_b;
	num = stack.bstack[c];
	while (c != 0)
	{
		stack.bstack[c] = stack.bstack[c - 1];
		c--;
	}
	stack.bstack[0] = num;
	write(1, "rrr\n", 4);
}
