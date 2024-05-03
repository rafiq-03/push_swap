/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:48:38 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/04/28 16:07:30 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list *stack)
{
	int	min;

	min = stack->index;
	while (stack)
	{
		if (stack->index < min)
			min = stack->index;
		stack = stack->next;
	}
	return (min);
}

int	ft_max(t_list *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	max_search(t_list *stack, int max)
{
	int	counter;

	counter = 0;
	while (stack)
	{
		if (max == stack->index)
			return (counter);
		counter++;
		stack = stack->next;
	}
	return (-1);
}

int	min_search(t_list *stack, int min)
{
	int	counter;

	counter = 0;
	while (stack)
	{
		if (min == stack->index)
			return (counter);
		counter++;
		stack = stack->next;
	}
	return (-1);
}

int	ft_range(int size)
{
	if (size <= 100)
		return (15);
	else
		return (40);
}
