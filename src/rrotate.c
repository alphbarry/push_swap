#include "../inc/push_swap.h"

static void	r_rotate(t_stack *stack)
{
	int	t;
	int	i;

	t = stack->n[0];
	i = 0;
	while (i < stack->top)
	{
		stack->n[i] = stack->n[i + 1];
		i++;
	}
	stack->n[stack->top] = t;
}

void	rra(t_stack *s_a)
{
	r_rotate(s_a);
	ft_printf("rra\n");
}

void	rrb(t_stack *s_b)
{
	r_rotate(s_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *s_a, t_stack *s_b)
{
	r_rotate(s_a);
	r_rotate(s_b);
	ft_printf("rrr\n");
}
