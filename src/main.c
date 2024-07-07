/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:29:46 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/07 20:42:49 by alpha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_stack	*s_b;
	char	**args;

	if (ac < 1)
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
	s_a = start_stack_b();
	if (s_a->size <= 6)
		smallsort(s_a, s_b);
}
