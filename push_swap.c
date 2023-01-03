/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:15:54 by cafriem           #+#    #+#             */
/*   Updated: 2023/01/02 15:45:40 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *stack, char *argv[])
{
	int	c;
	int	num;

	if (checker(stack, argv) == 0)
	{
		write (1, "Error\n", 6);
		exit (1);
	}
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

int	checker(t_stack *stack, char *argv[])
{
	int	argv_count;
	int	stack_count;

	argv_count = 0;
	while (argv_count < stack->size)
	{
		stack_count = 0;
		while (argv_count < stack_count)
		{
			if (argv[argv_count] == argv[stack_count])
				return (0);
			stack_count++;
		}
		argv_count++;
	}
	return (1);
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
	if (stack->size > 6 && stack->size < 250)
		sort100(stack);
	else
		sort500(stack);
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	stack.size = argc - 1;
	if (argv_checker(argc, argv) == 0)
	{
		write(2, "Error : Check stack sort", 24);
		exit(1);
	}
	init(&stack, argv);
	close_checker(&stack);
	if (sort_checker(&stack) == 1)
		exit(1);
	if (argc >= 2 && argc <= 6)
		shortsort(&stack);
	if (argc > 6)
		longsort(&stack);
	freeall(&stack);
}
