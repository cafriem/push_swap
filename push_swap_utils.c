/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:42:03 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/21 17:56:28 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	minandmin2(t_stack *stack)
{
	int	c;
	int	min2;

	c = 0;
	stack->min = stack->astack[c];
	while (c < stack->max_a)
	{
		if (stack->astack[c] < stack->min)
			stack->min = stack->astack[c];
		c++;
	}
	c = 0;
	if (stack->astack[c] != stack->min)
		stack->min2 = stack->astack[c];
	else
		stack->min2 = stack->astack[c + 1];
	while (c < stack->max_a)
	{
		if (stack->astack[c] != stack->min && stack->astack[c] < stack->min2)
			stack->min2 = stack->astack[c];
		c++;
	}
}
