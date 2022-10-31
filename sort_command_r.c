

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	num;
	int	end;
	int	c;

	c = 1;
	end = ft_endstack(stack->astack);
	num = stack->astack[0];
	while (c != end)
	{
		stack->astack[c - 1] = stack->astack[c];
		c++;
	}
	stack->astack[c - 1] = num;
	stack->astack[end] = NULL;
}

void	rb(t_stack *stack)
{
	int	num;
	int	end;
	int	c;

	c = 1;
	end = ft_endstack(stack->bstack);
	num = stack->bstack[0];
	while (c != end)
	{
		stack->bstack[c - 1] = stack->bstack[c];
		c++;
	}
	stack->bstack[c - 1] = num;
	stack->bstack[end] = NULL;
}

void	rr(t_stack *stack)
{
	int	num;
	int	end;
	int	c;

	c = 1;
	end = ft_endstack(stack->astack);
	num = stack->astack[0];
	while (c != end)
	{
		stack->astack[c - 1] = stack->astack[c];
		c++;
	}
	stack->astack[c - 1] = num;
	stack->astack[end] = NULL;
	c = 1;
	num = stack->bstack[0];
	while (c != end)
	{
		stack->bstack[c - 1] = stack->bstack[c];
		c++;
	}
	stack->bstack[c - 1] = num;
	stack->bstack[end] = NULL;
}
