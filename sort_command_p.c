/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:33:14 by cafriem           #+#    #+#             */
/*   Updated: 2022/12/13 15:25:57 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	c;
	int	num;
	int	end;

	c = 1;
	end = stack->max_b - 1;
	num = stack->bstack[0];
	stack->max_b--;
	while (c != end + 1)
	{
		stack->bstack[c - 1] = stack->bstack[c];
		c++;
	}
	stack->bstack[end] = num;
	stack->max_a++;
	c = stack->max_a - 1;
	while (c != 0)
	{
		stack->astack[c] = stack->astack[c - 1];
		c--;
	}
	stack->astack[0] = num;
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack)
{
	int	c;
	int	num;
	int	end;

	c = 1;
	end = stack->max_a - 1;
	num = stack->astack[0];
	stack->max_a--;
	while (c != end + 1)
	{
		stack->astack[c - 1] = stack->astack[c];
		c++;
	}
	stack->astack[end] = num;
	stack->max_b++;
	c = stack->max_b - 1;
	while (c != 0)
	{
		stack->bstack[c] = stack->bstack[c - 1];
		c--;
	}
	stack->bstack[0] = num;
	write(1, "pb\n", 3);
}
