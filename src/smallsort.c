#include "../inc/push_swap.h"

void	sort3(t_stack *s_a)
{
	int	*n;

	n = s_a->n;
	if (n[2] > n[1] && n[1] > n[0] && n[0] < n[2])
	{
		sa(s_a);
		rra(s_a);
	}
	else if (n[2] > n[1] && n[1] < n[0] && n[0] < n[2])
		ra(s_a);
	else if (n[0] > n[1] && n[1] < n[2] && n[0] > n[2])
		sa(s_a);
	else if (n[0] > n[2] && n[2] < n[1] && n[0] < n[1])
	{
		sa(s_a);
		ra(s_a);
	}
	else if (n[0] < n[2] && n[2] < n[1] && n[1] > n[0])
		rra(s_a);
}

void	smallest_num(t_stack *s_a, t_stack *s_b)
{
	int	i;
	int	p;

	i = s_a->top - 1;
	p = s_a->top;
	while (i >= 0)
	{
		if (s_a->n[i] < s_a->n[p])
			p = i;
		i--;
	}
	while (p < s_a->top)
	{
		ra(s_a);
		p++;
	}
	pb(s_a, s_b);
}

void	sort5(t_stack *s_a, t_stack *s_b)
{
	smallest_num(s_a, s_b);
	smallest_num(s_a, s_b);
	sort3(s_a);
	pa(s_a, s_b);
	pa(s_a, s_b);
}

void	smallsort(t_stack *s_a, t_stack *s_b)
{
	if (s_a->size == 1)
		return ;
	else if (s_a->size == 2)
	{
		if (s_a->n[s_a->top] > s_a->n[s_a->top - 1])
			sa(s_a);
	}
	else if (s_a->size == 3)
		sort3(s_a);
	else if (s_a->size == 4)
	{
		smallest_num(s_a, s_b);
		sort3(s_a);
		pa(s_a, s_b);
	}
	else if (s_a->size == 5)
		sort5(s_a, s_b);
	else
	{
		smallest_num(s_a, s_b);
	 	sort5(s_a, s_b);
		pa(s_a, s_b);
	}
}
