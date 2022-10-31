/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_rr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:47:54 by cafriem           #+#    #+#             */
/*   Updated: 2022/10/31 16:16:54 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	num;
	int	c;

	c = ft_endstack(stack->astack);
	num = stack->astack[c];
	while (c != 0)
	{
		stack->astack[c] = stack->astack[c - 1];
		c--;
	}
	stack->astack[0] = num;
	stack->astack[ft_endstack(stack->astack)] = 0;
}

void	rrb(t_stack *stack)
{
	int	num;
	int	c;

	c = ft_endstack(stack->bstack);
	num = stack->bstack[c];
	while (c != 0)
	{
		stack->bstack[c] = stack->bstack[c - 1];
		c--;
	}
	stack->bstack[0] = num;
	stack->bstack[ft_endstack(stack->bstack)] = 0;
}

void	rrr(t_stack *stack)
{
	int	num;
	int	c;

	c = ft_endstack(stack->astack);
	num = stack->astack[c];
	while (c != 0)
	{
		stack->astack[c] = stack->astack[c - 1];
		c--;
	}
	stack->astack[0] = num;
	stack->astack[ft_endstack(stack->astack)] = 0;
	c = ft_endstack(stack->bstack);
	num = stack->bstack[c];
	while (c != 0)
	{
		stack->bstack[c] = stack->bstack[c - 1];
		c--;
	}
	stack->bstack[0] = num;
	stack->bstack[ft_endstack(stack->bstack)] = 0;
}
