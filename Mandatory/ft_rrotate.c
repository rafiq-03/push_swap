/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:51:39 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 15:01:31 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_list **stack)
{
	t_list	*first_node;
	t_list	*last_node;
	t_list	*prev_last;

	if (ft_lstsize(*stack) < 2)
		return ;
	first_node = *stack;
	last_node = ft_lstlast(*stack);
	prev_last = ft_prev_last(*stack);
	last_node->next = first_node;
	*stack = last_node;
	prev_last->next = NULL;
}

void	ft_rra(t_list **stack_a)
{
	rrotate(stack_a);
	ft_putendl_fd("rra", 1);
}

void	ft_rrb(t_list **stack_b)
{
	rrotate(stack_b);
	ft_putendl_fd("rrb", 1);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	rrotate(stack_a);
	rrotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
