/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:07:34 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 17:27:40 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_a_node;
	t_list	*first_b_node;

	if (ft_lstsize(*stack_b) == 0)
		return ;
	first_b_node = *stack_b;
	first_a_node = *stack_a;
	*stack_b = (*stack_b)->next;
	*stack_a = first_b_node;
	first_b_node->next = first_a_node;
	ft_putendl_fd("pa", 1);
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_a_node;
	t_list	*first_b_node;

	if (ft_lstsize(*stack_a) == 0)
		return ;
	first_b_node = *stack_b;
	first_a_node = *stack_a;
	*stack_a = (*stack_a)->next;
	*stack_b = first_a_node;
	first_a_node->next = first_b_node;
	ft_putendl_fd("pb", 1);
}
