/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:48:00 by cafriem           #+#    #+#             */
/*   Updated: 2022/12/10 14:15:04 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	num;

	num = stack->astack[0];
	stack->astack[0] = stack->astack[1];
	stack->astack[1] = num;
	write(1, "sa\n", 3);
}

void	sb(t_stack stack)
{
	int	num;

	num = stack.bstack[0];
	stack.bstack[0] = stack.bstack[1];
	stack.bstack[1] = num;
	write(1, "sb\n", 3);
}

void	ss(t_stack stack)
{
	int	num;

	num = stack.astack[0];
	stack.astack[0] = stack.astack[1];
	stack.astack[1] = num;
	num = stack.bstack[0];
	stack.bstack[0] = stack.bstack[1];
	stack.bstack[1] = num;
	write(1, "ss\n", 3);
}
