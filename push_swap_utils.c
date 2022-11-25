/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:42:03 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/25 12:02:19 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	minandmin2(t_stack *stack)
{
	stack->minlocation = 0;
	stack->min = stack->astack[stack->minlocation];
	while (stack->minlocation < stack->max_a)
	{
		if (stack->astack[stack->minlocation] < stack->min)
			stack->min = stack->astack[stack->minlocation];
		stack->minlocation++;
	}
	stack->minlocation--;
	stack->min2location = 0;
	stack->min2 = 0;
	if (stack->astack[0] != stack->min)
		stack->min2 = stack->astack[0];
	else
		stack->min2 = stack->astack[1];
	while (stack->min2location < stack->max_a)
	{
		if (stack->astack[stack->min2location] != stack->min
			&& stack->astack[stack->min2location] < stack->min2)
			stack->min2 = stack->astack[stack->min2location];
		stack->min2location++;
	}
	stack->min2location--;
}

void	close_checker(t_stack *stack)
{
	int	c1;
	int	c2;

	stack->sort = ft_calloc(stack->size, sizeof(int));
	stack->sort[0] = stack->min;
	stack->sort[1] = stack->min2;
	c1 = 2;
	while (c1 < stack->max_a)
	{
		c2 = 0;
		stack->sort[c1] = stack->max;
		while (c2 != stack->max_a)
		{
			if (stack->astack[c2] < stack->sort[c1]
				&& stack->astack[c2] > stack->sort[c1 - 1])
				stack->sort[c1] = stack->astack[c2];
			c2++;
		}
		c1++;
	}
}
