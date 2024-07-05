/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:18:49 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/03 19:26:13 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stackt || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		(*stack) = tmp;
	}
	*stack = NULL;
}

void	ft_error(t_stack **s_a, t_stack **s_b)
{
	if (s_a == NULL || *s_a != NULL)
		free_stack(s_a);
	if (s_b == NULL || *s_b != NULL)
		free_stack(s_b);
	write(2, "Error\n", 6);
	exit(1);
}
