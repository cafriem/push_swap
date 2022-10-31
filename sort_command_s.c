

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