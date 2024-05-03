/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:40:08 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 13:10:38 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_spaces(char *str)
{
	while (*str)
	{
		if (*str != ' ')
			return (0);
		str++;
	}
	return (1);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
		return (0);
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_dublicate(t_list *stack_a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = stack_a;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->nb == tmp2->nb)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (0);
}

void	duplicate(t_list **stack_a)
{
	if (is_dublicate(*stack_a))
	{
		ft_putendl_fd("Error", 2);
		ft_lstclear(stack_a);
		exit(EXIT_FAILURE);
	}
}

int	is_sorted(t_list *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}
