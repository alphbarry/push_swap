#include "../inc/push_swap.h"

static	int	max_position(t_stack *stack)
{
	int	i;
	int	p;

	i = stack->top - 1;
	p = stack->top;
	while (i >= 0)
	{
		if (stack->n[i] > stack->n[p])
			p = i;
		i--;
	}
	return (p);
}

static int	min_position(t_stack *stack)
{
	int	i;
	int	p;

	i = stack->top - 1;
	p = stack->top;
	while (i >= 0)
	{
		if (stack->n[i] < stack->n[p])
			p = i;
		i--;
	}
	return (p);
}

static void	nbr_sort(t_stack *s_a, t_stack *s_b)
{
	int	tap;

	while (s_b->top >= 0)
	{
		tap = max_position(s_b);
		if (tap > s_b->top / 2)
		{
			while (tap < s_b->top)
			{
				rb(s_b);
				tap++;
			}
		}
		else
		{
			while (tap >= 0)
			{
				rrb(s_b);
				tap--;
			}
		}
		pa(s_a, s_b);
	}
}

void	bigsort(t_stack *s_a, t_stack *s_b)
{
	int	chunk_nbr;
	int	chunk_size;
	int	chunk_start;
	int	chunk_end;

	if (s_a->size <= 100)
		chunk_nbr = 5;
	else
		chunk_nbr = 11;
	chunk_size = s_a->n[max_position(s_a)] / chunk_nbr;
	chunk_start = s_a->n[min_position(s_a)];
	while (chunk_start < s_a->n[max_position(s_a)])
	{
		chunk_end = chunk_start + chunk_size;
		chunksort(s_a, s_b, chunk_start, chunk_end);
		chunk_start += chunk_size;
	}
	nbr_sort(s_a, s_b);
}
