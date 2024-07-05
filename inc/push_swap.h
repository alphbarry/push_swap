/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:04:18 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/05 20:51:38 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/src/libft.h"
# include "../libs/libft/src/get_next_line.h"
# include "../libs/ft_printf/inc/ft_printf.h"
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int	index;
	int	pos;
	int	value;
	int	target;
	int	cost_a;
	int	cost_b;
	struct	s_stack	*next;
}	t_stack;
void	get_numbers(char *av, t_stack **s_a);
int		input_is_correct(char *s);
void	free_stack(t_stack **stack);
void	ft_error(t_stack **s_a, t_stack **s_b);
t_stack	*new_stack(int value);
void	add_stack(t_stack **s, t_stack *new);

#endif
