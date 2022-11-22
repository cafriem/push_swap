/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swaplong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:35:55 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/22 15:53:37 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort100(t_stack *stack)
{
	int	c;

	stack->chunk_size = abs(stack->size / 5);
	stack->mid = abs(stack->size / 2);
	c = 0;
}
