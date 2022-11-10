
#include "push_swap.h"

void	sort2(t_stack stack)
{
	if(stack.astack[0] > stack.astack[1])
		sa(stack);
}

void	sort3(t_stack stack)
{
	if(stack.astack[0] < stack.astack[1])
	{
		if(stack.astack[1] > stack.astack[2])
			rra(stack);
		if(stack.astack[0] > stack.astack[1])
			sa(stack);
	}
	if(stack.astack[0] > stack.astack[1])
	{
		if(stack.astack[0] > stack.astack[2])
			ra(stack);
		if(stack.astack[0] > stack.astack[1])
			sa(stack);
	}
}
