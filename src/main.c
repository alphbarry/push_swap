/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:29:46 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/09 19:57:09 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->n[i] > stack->n[i + 1])
			return (0);
		i++;
	}
	return (1);
}

/*void print_stack(t_stack *stack)
{
    int	i;

	i = stack->top;
	while (i >= 0)
	{
		ft_printf("%d\n", stack->n[i]);
		i--;
	}
}*/

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_stack	*s_b;
	char	**args;

	if (ac == 1)
	{
		args = NULL;
		return (0);
	}
	else if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av + 1;
	check_arguments(ac, args);
	s_a = start_stack_a(args);
	s_b = start_stack_b();
	if (is_sorted(s_a))
	{
		ft_free_stacks(ac, args, s_a, s_b);
		return (0);
	}
	else
	{
		if (s_a->size <= 6)
			smallsort(s_a, s_b);
		else
			bigsort(s_a, s_b);
	}
	//print_stack(s_a);
	ft_free_stacks(ac, args, s_a, s_b);
	return (0);
}
