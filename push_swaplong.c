/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swaplong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:35:55 by cafriem           #+#    #+#             */
/*   Updated: 2022/12/13 16:46:47 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort100(t_stack *stack)
{
	int	c;
	int	chunk;

	c = 0;
	stack->chunk_size = (stack->size / 5);
	stack->mid = (stack->size / 2);
	minandmin2(stack);
	close_checker(stack);
	chunk = stack->chunk_size;
	while (c < stack->size && stack->max_a != 0)
	{
		sort1002(stack, chunk, c);
	}
	c = stack->max_b - 1;
	while (stack->max_b != 0)
	{
		findersort(stack, c);
		c--;
	}
	printinga(stack);
}

void	sort1002(t_stack *stack, int chunk, int c)
{
	if (c == chunk)
		chunk += stack->chunk_size;
	if (stack_check(stack, chunk) == 1)
	{
		pb(stack);
		c++;
	}
	else if (stack_check(stack, chunk) == -1)
		ra(stack);
}

void	sort500(t_stack *stack)
{
	int	c;
	int	chunk;

	c = 0;
	stack->chunk_size = (stack->size / 15);
	stack->mid = (stack->size / 2);
	minandmin2(stack);
	close_checker(stack);
	chunk = stack->chunk_size;
	while (c < stack->size && stack->max_a != 0)
	{
		sort5002(stack, chunk, c);
	}
	c = stack->max_b - 1;
	while (stack->max_b != 0)
	{
		findersort(stack, c);
		c--;
	}
	printinga(stack);
}

void	sort5002(t_stack *stack, int chunk, int c)
{
	if (c == chunk)
		chunk += stack->chunk_size;
	if (stack_check(stack, chunk) == 1)
	{
		pb(stack);
		c++;
	}
	else if (stack_check(stack, chunk) == -1)
		ra(stack);
}

// python3 python_visualizer.py `ruby -e "puts (0..50).to_a.shuffle.join(' ')"`