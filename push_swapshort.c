/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapshort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:28:15 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/17 16:47:46 by cafriem          ###   ########.fr       */
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
	if (stack.astack[0] > stack.astack[1])
	{
		if (stack.astack[0] > stack.astack[2]
			&& stack.astack[0] < stack.astack[3])
		{
			rra(stack);
			sa(stack);
			ra(stack);
			ra(stack);
			if (stack.astack[0] > stack.astack[1])
				sa(stack);
		}
	}
}

//3 1 2 4
//3 2 1 4