/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:47:31 by cafriem           #+#    #+#             */
/*   Updated: 2022/11/28 12:52:34 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <signal.h>
# include "Libft/libft.h"
# include <stdio.h>

typedef struct p_stack
{
	int	*astack;
	int	*bstack;
	int	*sort;
	int	size;
	int	chunk_size;
	int	mid;
	int	max_a;
	int	max_b;
	int	min;
	int	min2;
	int	max;
	int	minlocation;
	int	min2location;
}	t_stack;

int		main(int argc, char *argv[]);
void	init(t_stack *stack, char *argv[]);
void	minandmin2(t_stack *stack);
void	close_checker(t_stack *stack);
int		stack_check(t_stack *stack, int chunk);
//
void	longsort(t_stack *stack);
void	sort100(t_stack *stack);
//
void	shortsort(t_stack *stack);
void	sort2(t_stack *stack);
void	sort3(t_stack *stack);
void	sort4(t_stack *stack);
void	sort5(t_stack *stack);
//
void	sa(t_stack *stack);
void	sb(t_stack stack);
void	ss(t_stack stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack stack);
void	rra(t_stack *stack);
void	rrb(t_stack stack);
void	rrr(t_stack stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
//

#endif
