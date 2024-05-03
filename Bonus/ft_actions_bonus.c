/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:23:07 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 13:32:47 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	swap(t_list **stack)
{
	t_list	*node1;
	t_list	*node2;

	if (ft_lstsize(*stack) < 2)
		return ;
	node1 = *stack;
	node2 = (*stack)->next;
	*stack = node2;
	node1->next = node2->next;
	node2->next = node1;
}

void	rotate(t_list **stack)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*last_node;

	if (ft_lstsize(*stack) < 2)
		return ;
	first_node = *stack;
	second_node = first_node->next;
	last_node = ft_lstlast(*stack);
	last_node->next = first_node;
	*stack = second_node;
	first_node->next = NULL;
}

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
}
