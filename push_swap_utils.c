/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:42:03 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/22 17:42:03 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	minandmin2(t_stack *stack)
{
	int	c;
	int	min2;

	stack->minlocation = 0;
	stack->min = stack->astack[c];
	while (stack->minlocation < stack->max_a)
	{
		if (stack->astack[stack->minlocation] < stack->min)
			stack->min = stack->astack[stack->minlocation];
		stack->minlocation++;
	}
	stack->minlocation--;
	stack->min2location = 0;
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
	int	a;
	int	b;

	if (stack->minlocation / 2)
		a = stack->minlocation;
	b = stack->min2location;
}
