/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:05:09 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/11 17:30:01 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	ft_check_len(char *s)
{
	long int	num;
	int			i;
	int			sn;

	i = 0;
	num = 0;
	sn = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-')
		sn *= -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	num *= sn;
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->top)
	{
		if (stack->n[i] > stack->n[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

static int	ft_is_number(char *av)
{
	int	i;

	i = 0;
	if (av[i] == '-' || av[i] == '+')
		i++;
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_is_repeated(char **av, int a, int n)
{
	int	i;

	i = 0;
	while (av[i] && i < a)
	{
		if (ft_atoi(av[i]) == n)
			return (0);
		i++;
	}
	return (1);
}

void	check_arguments(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!ft_is_number(av[i]))
			ft_error(ac, av);
		else if (!ft_check_len(av[i]))
			ft_error(ac, av);
		else if (!ft_is_repeated(av, i, ft_atoi(av[i])))
			ft_error(ac, av);
		i++;
	}
}
