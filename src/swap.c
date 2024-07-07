/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:30:49 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/07 21:00:46 by alpha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/push_swap.h"

static void	swap(t_stack *stack)
{
	int	t;

	t = stack->n[stack->top];
	stack->n[stack->top] = stack->n[stack->top - 1];
	stack->n[stack->top - 1] = t;
}

void	sa(t_stack *s_a)
{
	swap(s_a);
	ft_printf("sa\n");
}

void	sb(t_stack *s_b)
{
	swap(s_b);
	ft_printf("sb\n");
}

void	ss(t_stack *s_a, t_stack *s_b)
{
	swap(s_a);
	swap(s_b);
	ft_printf("ss\n");
}
