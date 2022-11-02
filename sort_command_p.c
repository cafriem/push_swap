/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:33:14 by cafriem           #+#    #+#             */
/*   Updated: 2022/10/31 17:35:58 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	c;
	int	num;
	int	end;

	num = stack->bstack[0];
	end = ft_end(stack->bstack);
	c = end;
	while (end < 0)
	{
		stack->bstack[end - 1] = stack->bstack[end];
		end--;
	}
	stack->bstack[c] = 0;
	c = ft_endstack(stack->astack);
	while (c != 0)
	{
		stack->astack[c] = stack->astack[c - 1];
		c--;
	}
	stack->astack[0] = num;
	stack->astack[ft_endstack(stack->astack)] = 0;
}

void	pb(t_stack *stack)
{
	int	c;
	int	num;
	int	end;

	num = stack->astack[0];
	end = ft_end(stack->astack);
	c = end;
	while (end < 0)
	{
		stack->astack[end - 1] = stack->astack[end];
		end--;
	}
	stack->astack[c] = 0;
	c = ft_endstack(stack->bstack);
	while (c != 0)
	{
		stack->bstack[c] = stack->bstack[c - 1];
		c--;
	}
	stack->bstack[0] = num;
	stack->bstack[ft_endstack(stack->bstack)] = 0;
}
