/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:48:00 by cafriem           #+#    #+#             */
/*   Updated: 2022/10/31 15:48:07 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	num;

	num = stack->astack[1];
	stack->astack[1] = stack->astack[2];
	stack->astack[2] = num;
}

void	sb(t_stack *stack)
{
	int	num;

	num = stack->bstack[1];
	stack->bstack[1] = stack->bstack[2];
	stack->bstack[2] = num;
}

void	ss(t_stack *stack)
{
	int	num;

	num = stack->astack[1];
	stack->astack[1] = stack->astack[2];
	stack->astack[2] = num;
	num = stack->bstack[1];
	stack->bstack[1] = stack->bstack[2];
	stack->bstack[2] = num;
}
