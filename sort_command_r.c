/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:47:47 by cafriem           #+#    #+#             */
/*   Updated: 2023/01/06 16:25:14 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	num;
	int	end;
	int	c;

	c = 1;
	end = stack->max_a - 1;
	num = stack->astack[0];
	while (c != end + 1)
	{
		stack->astack[c - 1] = stack->astack[c];
		c++;
	}
	stack->astack[end] = num;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	int	num;
	int	end;
	int	c;

	c = 1;
	end = stack->max_b - 1;
	num = stack->bstack[0];
	while (c <= end)
	{
		stack->bstack[c - 1] = stack->bstack[c];
		c++;
	}
	stack->bstack[c - 1] = num;
	write(1, "rb\n", 3);
}

void	rr(t_stack stack)
{
	int	num;
	int	end;
	int	c;

	c = 1;
	end = stack.max_a;
	num = stack.astack[0];
	while (c != end)
	{
		stack.astack[c - 1] = stack.astack[c];
		c++;
	}
	stack.astack[c - 1] = num;
	c = 1;
	num = stack.bstack[0];
	while (c != end)
	{
		stack.bstack[c - 1] = stack.bstack[c];
		c++;
	}
	stack.bstack[c - 1] = num;
	write(1, "rr\n", 3);
}
