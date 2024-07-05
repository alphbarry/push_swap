/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:02:26 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/05 20:59:08 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/*	Comprobar que se inroduzca solo nuumeros.	*/

long	input_is_correct(char *s)
{
	int	i;

	i = 0;
	if ((s[i] == '-' || s[i] == '+') && (ft_strlen(s) > 1))
			i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*	Comprobar que ningun numero se duplique.	*/
int	is_duplicate(t_stack *s)
{
	t_stack	*t1;
	t_stack	*t2;

	t = s;
	while(t)
	{
		t2 = t1->next;
		while (t2)
		{
			if (t1->value == t2->value)
				return (1);
			t2 = t2->next;
		}
		t1 = t1->next;
	}
	return (0);
}
