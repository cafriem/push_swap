/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:15:54 by cafriem           #+#    #+#             */
/*   Updated: 2022/12/12 16:28:03 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *stack, char *argv[])
{
	int	c;
	int	num;

	stack->astack = ft_calloc(stack->size, sizeof(int));
	stack->bstack = ft_calloc(stack->size, sizeof(int));
	c = 1;
	stack->max = ft_atoi(argv[c]);
	stack->min = ft_atoi(argv[c]);
	while (c < stack->size + 1)
	{
		num = ft_atoi(argv[c]);
		if (stack->max < num)
			stack->max = num;
		if (stack->min > num)
			stack->min = num;
		stack->astack[c - 1] = num;
		c++;
	}
	stack->max_b = 0;
	stack->max_a = stack->size;
}

void	init2(t_stack *stack)
{
	int	c;

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

void	shortsort(t_stack *stack)
{
	if (stack->size == 2)
		sort2(stack);
	if (stack->size == 3)
		sort3(stack);
	if (stack->size == 4)
		sort4(stack);
	if (stack->size == 5)
		sort5(stack);
}

void	longsort(t_stack *stack)
{
	if (stack->size > 6 && stack->size < 101)
		sort100(stack);
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	stack.size = argc - 1;
	// printf("size = %d\n", stack.size);
	if (stack.size <= 1)
	{
		write(1, "Error : Nothing to sort", 24);
		exit(1);
	}
	init(&stack, argv);
	if (argc >= 2 && argc <= 6)
		shortsort(&stack);
	if (argc > 6)
		longsort(&stack);
	printf("%d %d %d %d %d %d %d %d\n", stack.astack[0], stack.astack[1], stack.astack[2], stack.astack[3], stack.astack[4], stack.astack[5], stack.astack[6], stack.astack[7]);
}
