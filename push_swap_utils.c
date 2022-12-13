/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:42:03 by cafriem           #+#    #+#             */
/*   Updated: 2022/12/13 14:00:46 by cafriem          ###   ########.fr       */
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

void	findersort(t_stack *stack, int num)
{
	int	c;
	int	sort;

	c = 0;
	sort = stack->sort[num];
	printf("sort = %d\n", sort);
	// printf("%d\n", num);
	while (sort != stack->bstack[c] && stack->max_b != c)
		c++;
	printf("b stack = %d\n", stack->bstack[c]);
	printf("c = %d\n", c);
	if (c < 0)
		c *= -1;
	if (c > stack->max_b / 2)
		larger(stack, c);
	if (c <= stack->max_b / 2)
		smaller(stack, c);
}

// c = position of sort

void	larger(t_stack *stack, int c)
{
	int	counter;

	// printf("before c = %d\n", c);
	c = (stack->max_b - c);
	// printf("max = %d\n", stack->max_b);
	// printf("c = %d\n", c);
	counter = 0;
	while (counter != c)
	{
		rrb(stack);
		counter++;
	}
	printf("rrb = %d\n", stack->bstack[0]);
	pa(stack);
}

void	smaller(t_stack *stack, int c)
{
	int	counter;

	// printf("before c = %d\n", c);
	counter = 0;
	while (counter != c)
	{
		rb(stack);
		counter++;
	}
	printf("rb = %d\n", stack->bstack[0]);
	pa(stack);
}

// 
// 
// 
// void	lchunker(t_stack *stack, int chunk, int bstart)
// {
// 	int	chunkamount;
// 	int	start;
// 	int	count;
// 	// int	end;
// 	int	c;

// 	chunkamount = chunk - stack->chunk_size;
// 	// end = bstart;
// 	//chunkamount = 15
// 	//bstart = 19
// 	stack->max_a = 1;
// 	if (bstart > chunkamount)
// 	{
// 		stack->max = stack->sort[bstart];
// 		bstart--;
// 		if (bstart > chunkamount)
// 		{
// 			stack->max2 = stack->sort[bstart - 1];
// 			bstart--;
// 		}
// 	}
// 	c = 0;
// 	start = 0;
// 	count = 0;
// 	while (count != 2)
// 	{
// 		if (stack->max == stack->bstack[start]
// 			|| (stack->max2 == stack->bstack[start] && stack->max < stack->max2))
// 		{
// 			pb(stack);
// 			count++;
// 		}
// 		else
// 		{
// 			rb(stack);
// 			c++;
// 		}
// 		start++;
// 	}
// 	while (c > 0)
// 	{
// 		rrb(stack);
// 		c--;
// 	}
// }
