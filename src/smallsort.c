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
}
