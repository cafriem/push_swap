/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:15:54 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/17 16:52:00 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *stack, char *argv[])
{
	int	c;

	if (stack->size <= 1)
	{
		write(1, "Error : Nothing to sort", 25);
		exit(1);
	}
	stack->astack = ft_calloc(stack->size, sizeof(int));
	stack->bstack = ft_calloc(stack->size, sizeof(int));
	c = 1;
	while (c < stack->size + 1)
	{
		stack->astack[c - 1] = ft_atoi(argv[c]);
		c++;
	}
	printf("%d %d %d %d\n", stack->astack[0], stack->astack[1], stack->astack[2], stack->astack[3]);
	stack->max_b = 0;
	stack->max_a = stack->size - 1;
}

void	shortsort(t_stack *stack)
{
	if (stack->size == 2)
		sort2(*stack);
	if (stack->size == 3)
		sort3(*stack);
	if (stack->size == 4)
		sort4(*stack);
	// if (stack->size == 5)
	// 	sort5();
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	stack.size = argc - 1;
	init(&stack, argv);
	if (argc >= 2 && argc <= 5)
		shortsort(&stack);
	printf("%d %d %d %d\n", stack.astack[0], stack.astack[1], stack.astack[2], stack.astack[3]);
}
