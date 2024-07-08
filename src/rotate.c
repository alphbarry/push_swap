#include "../inc/push_swap.h"

static void	rotate(t_stack *stack)
{
	int	t;
	int	i;

	t = stack->n[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->n[i] = stack->n[i - 1];
		i--;
	}
	stack->n[0] = t;
}

void	ra(t_stack *s_a)
{
	rotate(s_a);
	ft_printf("ra\n");
}

void	rb(t_stack *s_b)
{
	rotate(s_b);
	ft_printf("rb\n");
}

void	rr(t_stack *s_a, t_stack *s_b)
{
	rotate(s_a);
	rotate(s_b);
	ft_printf("rs\n");
}
