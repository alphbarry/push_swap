/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:30:07 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/05 20:50:43 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
/*	Crear un nodo en el stack  con el valor dado por parametro
	y retorna un nuevo elemento de stack.	*/

t_stack	*new_stack(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

/*	Anade un elemento a la ultima posicion del stack.	*/

void	add_stack(t_stack **s, t_stack *new)
{
	t_stack	*l;

	if (!new)
		return ;
	if(!*s)
	{
		*s = new;
		return ;
	}
	l = get_last_elem(*s);
	l->next = new;
}

/*	Conseguir el ultimo elemnto del stack.	*/

t_stack	*get_last_elem(t_stack *s)
{
	while (s && s->next != '\0')
		s = s->next;
	return (s);
}
