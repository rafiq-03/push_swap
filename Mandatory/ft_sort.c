/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:31:43 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 17:26:54 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
		ft_ra(stack_a);
}

void	sort_three(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->index;
	b = (*stack_a)->next->index;
	c = (*stack_a)->next->next->index;
	if (a < b && b > c && c > a)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (a > b && b < c && c > a)
		ft_sa(stack_a);
	else if (a < b && b > c && c < a)
		ft_rra(stack_a);
	else if (a > b && b < c && c < a)
		ft_ra(stack_a);
	else if (a > b && b > c && c < a)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
	}
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	nb;

	while (ft_lstsize(*stack_a) >= 4)
	{
		nb = ft_min(*stack_a);
		if ((*stack_a)->index == nb)
			ft_pb(stack_a, stack_b);
		if (min_search(*stack_a, nb) > (ft_lstsize(*stack_a) / 2))
			ft_rra(stack_a);
		else
			ft_ra(stack_a);
	}
	sort_three(stack_a);
	while (ft_lstsize(*stack_b))
		ft_pa(stack_a, stack_b);
}

void	ft_range_sort(t_list **stack_a, t_list **stack_b)
{
	int	max_stack_b;
	int	counter;
	int	range;

	range = ft_range(ft_lstsize(*stack_a));
	ft_push_to_b(stack_a, stack_b, range);
	while (*stack_b)
	{
		max_stack_b = ft_max(*stack_b);
		counter = max_search(*stack_b, max_stack_b);
		if (counter > ft_lstsize(*stack_b) / 2)
		{
			while (ft_lstsize(*stack_b) - counter)
			{
				ft_rrb(stack_b);
				counter++;
			}
		}
		else
		{
			while (counter--)
				ft_rb(stack_b);
		}
		ft_pa(stack_a, stack_b);
	}
}

void	ft_push_to_b(t_list **stack_a, t_list **stack_b, int range)
{
	int	min;
	int	max;

	max = range;
	min = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index >= min && (*stack_a)->index <= max)
		{
			ft_pb(stack_a, stack_b);
			min++;
			max++;
		}
		else if ((*stack_a)->index < min)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			min++;
			max++;
		}
		else
			ft_ra(stack_a);
	}
}
