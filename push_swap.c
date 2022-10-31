/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:15:54 by cafriem           #+#    #+#             */
/*   Updated: 2022/10/25 17:08:20 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *stack, char *argv[])
{
	int c;

	c = 0;
	if (stack->size <= 1)
	{
		write(1, "Error : Nothing to sort", 25);
		exit(0);
	}
	stack->astack = ft_calloc(stack->size + 1, sizeof(int));
	stack->bstack = ft_calloc(stack->size + 1, sizeof(int));
	while (c > stack->size)
	{
		stack->astack[c] = ft_atoi(argv[c]);
		c++;
	}
}

void	shortsort(t_stack *stack)
{
	if (stack->size == 2)
		sorting2();
	if (stack->size == 3)
		sorting3();
	if (stack->size == 4)
		sorting4();
	if (stack->size == 5)
		sorting5();
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	stack.size = argc;
	init(&stack, argv);
	if (argc >= 2 && argc <= 5)
		shortsort(&stack);
	//
	sa(&stack);
}
