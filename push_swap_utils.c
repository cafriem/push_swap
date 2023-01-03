/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:42:03 by cafriem           #+#    #+#             */
/*   Updated: 2023/01/02 15:48:55 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argv_checker(int argc, char *argv[])
{
	int	st_c;
	int	ar_c;

	st_c = 1;
	while (argc > st_c)
	{
		ar_c = 1;
		while (ar_c < st_c)
		{
			if (ft_atoi(argv[ar_c]) == ft_atoi(argv[st_c]))
				return (0);
			ar_c++;
		}
		st_c++;
	}
	return (1);
}

int	sort_checker(t_stack *stack)
{
	int	counter;

	counter = 0;
	while (counter < stack->size)
	{
		if (stack->astack[counter] != stack->sort[counter])
			return (0);
		counter++;
	}
	return (1);
}

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
	c1 = 1;
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

int	stack_check(t_stack *stack, int chunk)
{
	int	c;

	c = 0;
	while (c < chunk)
	{
		if (stack->sort[c] == stack->astack[0])
			return (1);
		c++;
	}
	return (-1);
}
