#include "../inc/push_swap.h"

static	int	array_len(char	**av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

void	ft_error(int ac, char **av)
{
	char	**p;

	if (ac == 2)
	{
		p = av;
		while (*p)
		{
			free(p);
			p++;
		}
		free(av);
	}
	ft_printf("Error\n");
	exit (1);
}

void	ft_free_stacks(int ac, char **av, t_stack *s_a, t_stack *s_b)
{
	char	**p;

	if (ac == 2)
	{
		p = av;
		while (*p)
		{
			free(*p);
			p++;
		}
		free(av);
	}
	free(s_a);
	free(s_b);
	exit (0);
}

t_stack	*start_stack_a(char **av)
{
	t_stack	*s_a;
	int		i;

	s_a = malloc(sizeof(t_stack));
	s_a->top = -1;
	s_a->size = array_len(av);
	i = s_a->size - 1;
	while (i >= 0)
	{
		s_a->top++;
		s_a->n[s_a->top] = ft_atoi(av[i]);
		i--;
	}
	return (s_a);
}

t_stack	*start_stack_b(void)
{
	t_stack	*s_b;

	s_b = malloc(sizeof(t_stack));
	s_b->top = -1;
	s_b->size = 0;
	return (s_b);
}
