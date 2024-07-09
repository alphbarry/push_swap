/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:04:18 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/09 19:40:22 by alphbarr         ###   ########.fr       */
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
	int	n[1024];
	int	top;
	int	size;
}	t_stack;

/* Arguments check */
void	check_arguments(int ac, char **av);

/* management of stack */
t_stack	*start_stack_a(char **av);
t_stack	*start_stack_b(void);
void	ft_free_stacks(int ac, char **av, t_stack *s_a, t_stack *s_b);
void	ft_error(int ac, char **av);

/* Swap */
void	sa(t_stack *s_a);
void	sb(t_stack *s_b);
void	ss(t_stack *s_a, t_stack *s_b);

/* rotate*/
void	ra(t_stack *s_a);
void	rb(t_stack *s_b);
void	rr(t_stack *s_a, t_stack *s_b);

/* rrotate */
void	rra(t_stack *s_a);
void	rrb(t_stack *s_b);
void	rrr(t_stack *s_a, t_stack *s_b);

/* Push */
void	pa(t_stack *s_a, t_stack *s_b);
void	pb(t_stack *s_a, t_stack *s_b);

/* smallsort */
void	smallsort(t_stack *s_a, t_stack *s_b);

/* Bigsort */
void	bigsort(t_stack *s_a, t_stack *s_b);

/* Chunksort */
void	chunksort(t_stack *s_a, t_stack *s_b, int chunk_start, int chunk_end);
#endif
