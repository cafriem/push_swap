/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapshort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:28:15 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/17 20:16:12 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack stack)
{
	if (stack.astack[0] > stack.astack[1])
		sa(stack);
}

void	sort3(t_stack stack)
{
	if (stack.astack[0] < stack.astack[1])
	{
		if (stack.astack[1] > stack.astack[2])
			rra(stack);
		if (stack.astack[0] > stack.astack[1])
			sa(stack);
	}
	if (stack.astack[0] > stack.astack[1])
	{
		if (stack.astack[0] > stack.astack[2])
			ra(stack);
		if (stack.astack[0] > stack.astack[1])
			sa(stack);
	}
}

void	sort4(t_stack stack)
{
	if (stack.astack[0] == stack.min || stack.astack[1] == stack.min
		|| stack.astack[2] == stack.min)
	{
		if (stack.astack[3] == stack.min)
			rra(stack);
		if (stack.astack[2] == stack.min)
			ra(stack);
		if (stack.astack[1] == stack.min)
			sa(stack);
		pb(stack);
		// printf("before = %d %d %d %d\n", stack.astack[0], stack.astack[1], stack.astack[2], stack.astack[3]);
		sort3(stack);
		// printf("after = %d %d %d %d\n", stack.astack[0], stack.astack[1], stack.astack[2], stack.astack[3]);
		pa(stack);
	}
	stack.max = 99;
}
