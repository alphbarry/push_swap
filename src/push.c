/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:09:37 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/11 14:09:39 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_stack *src, t_stack *dst)
{
	dst->top++;
	dst->n[dst->top] = src->n[src->top];
	src->top--;
}

void	pa(t_stack *s_a, t_stack *s_b)
{
	push(s_b, s_a);
	ft_printf("pa\n");
}

void	pb(t_stack *s_a, t_stack *s_b)
{
	push(s_a, s_b);
	ft_printf("pb\n");
}
