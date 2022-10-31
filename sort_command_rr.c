/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command_rr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:47:54 by cafriem           #+#    #+#             */
/*   Updated: 2022/10/31 15:47:58 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	num;
	int	c;

	c = ft_endstack(stack->astack);
	num = stack->astack[0];
	while (c != 1)
	{
		stack->astack[c] = stack->astack[c];
		c--;
	}
	stack->astack[c - 1] = num;
	stack->astack[c] = NULL;
}
