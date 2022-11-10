/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:15:54 by cafriem           #+#    #+#             */
/*   Updated: 2022/10/31 15:48:15 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *stack, char *argv[])
{
	int	c;

	if (stack->size <= 1)
	{
		write(1, "Error : Nothing to sort", 25);
		exit(0);
	}
	stack->astack = ft_calloc(stack->size + 1, sizeof(int));
	stack->bstack = ft_calloc(stack->size + 1, sizeof(int));
	c = 0;
	while (c < stack->size)
	{
		stack->astack[c] = ft_atoi(argv[c]);
		c++;
	}
	printf("%d %d %d", stack->astack[0], stack->astack[1], stack->astack[2]);
	stack->max_b = 0;
	stack->max_a = stack->size;
}

void	shortsort(t_stack *stack)
{
	if (stack->size == 2)
		sort2(*stack);
	if (stack->size == 3)
		sort3(*stack);
	// if (stack->size == 4)
	// 	sort4();
	// if (stack->size == 5)
	// 	sort5();
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	stack.size = argc;
	init(&stack, argv);
	if (argc >= 2 && argc <= 5)
		shortsort(&stack);
}
