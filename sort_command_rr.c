

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
