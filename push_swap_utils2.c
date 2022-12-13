/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:38:38 by cafriem           #+#    #+#             */
/*   Updated: 2022/12/13 16:40:54 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	findersort(t_stack *stack, int num)
{
	int	position;
	int	sort;

	position = 0;
	sort = stack->sort[num];
	while (sort != stack->bstack[position] && position < stack->max_b)
		position++;
	if (position > stack->max_b / 2)
		larger(stack, sort);
	if (position <= stack->max_b / 2)
		smaller(stack, sort);
}

void	larger(t_stack *stack, int c)
{
	while (stack->bstack[0] != c)
		rrb(stack);
	pa(stack);
}

void	smaller(t_stack *stack, int c)
{
	while (stack->bstack[0] != c)
		rb(stack);
	pa(stack);
}

void	freeall(t_stack *stack)
{
	free(stack->astack);
	free(stack->bstack);
}
