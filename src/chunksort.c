#include "../inc/push_swap.h"

static int	still_chunk(t_stack *s_a, int chunk_start, int chunk_end)
{
	int	i;

	i = 0;
	while (i <= s_a->top)
	{
		if (s_a->n[i] >= chunk_start && s_a->n[i] <= chunk_end)
			return (1);
		i++;
	}
	return (0);
}


static int	cost_from_top(t_stack *s_a, int chunk_start, int chunk_end)
{
	int	i;
	int	j;

	i = s_a->top;
	j = 0;
	while (i >= 0)
	{
		if (s_a->n[i] >= chunk_start && s_a->n[i] <= chunk_end)
			return (j);
		i--;
		j++;
	}
	return (j);
}

static int	cost_from_bottom(t_stack *s_a, int chunk_start, int chunk_end)
{
	int	i;

	i = 0;
	while (i >= 0)
	{
		if (s_a->n[i] >= chunk_start && s_a->n[i] <= chunk_end)
			return (i);
		i++;
	}
	return (i);
}

void	chunksort(t_stack *s_a, t_stack *s_b, int chunk_start, int chunk_end)
{
	int	top;
	int	min;

	while (still_chunk(s_a, chunk_start, chunk_end))
	{
		top = cost_from_top(s_a, chunk_start, chunk_end);
		min = cost_from_bottom(s_a, chunk_start, chunk_end);
		if (top < min)
		{
			top = s_a->top - top;
			while (top++ < s_a->top)
				ra(s_a);
		}
		else
		{
			while (min-- >= 0)
				rra(s_a);
		}
		pb(s_a, s_b);
	}
}
