/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:46:09 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 19:36:16 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = init_stack_a(ac, av);
	stack_b = NULL;
	size = ft_lstsize(stack_a);
	if (size == 1 || is_sorted(stack_a))
		return (0);
	else if (size == 2)
		sort_two(&stack_a);
	else if (size == 3)
		sort_three(&stack_a);
	else if (size == 4 || size == 5)
		sort_five(&stack_a, &stack_b);
	else
		ft_range_sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
