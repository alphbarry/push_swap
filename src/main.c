/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:29:46 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/05 20:54:05 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	get_numbers(char *av, t_stack **s_a)
{
	char	**param;
	int		n;
	int		i;

	param = ft_split(av, ' ');
	i = 0;
	while (param[i])
	{
		if (input_is_correct(param[i]))
		{
			n = ft_atoi(param[i]);
			if (n > INT_MAX || n < INT_MIN)
				ft_error(s_a, NULL);
			add_stack(s_a, new_stack(n));
		}
		else
			ft_error(NULL, NULL);
		free(param[i]);
		i++;
	}
	free(param);
}

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_stack	*s_b;
	int		s_size;
	int		i;

	i = 1;
	s_a = NULL;
	s_b = NULL;
	while (i < ac)
	{
		get_numbers(av[i], &s_a);
		i++;
	}
	if (is_duplicate)
}
