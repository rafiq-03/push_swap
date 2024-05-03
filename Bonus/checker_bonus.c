/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:46:09 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 19:36:06 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*line;

	stack_a = init_stack_a(ac, av);
	while (1)
	{
		line = get_next_line(0);
		if (!line)
		{
			if (is_sorted(stack_a) && !ft_lstsize(stack_b))
				ft_putendl_fd("OK", 1);
			else
				ft_putendl_fd("KO", 1);
			exit(0);
		}
		else if (line[0] == '\n')
			put_error();
		else 
			handel_input(line, &stack_a, &stack_b);
		free(line);
	}
}

void	handel_input(char *line, t_list **stack_a, t_list **stack_b)
{
	if (ft_strlen(line) == 3)
		handel_input_1(line, stack_a, stack_b);
	else if (!ft_strncmp(line, "rra\n", 4))
		rrotate(stack_a);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrotate(stack_b);
	else if (!ft_strncmp(line, "rrr\n", 4))
	{
		rrotate(stack_a);
		rrotate(stack_b);
	}
	else
		put_error();
}

void	handel_input_1(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strncmp(line, "sa\n", 3))
		swap(stack_a);
	else if (!ft_strncmp(line, "sb\n", 3))
		swap(stack_b);
	else if (!ft_strncmp(line, "ss\n", 3))
	{
		swap(stack_a);
		swap(stack_b);
	}
	else if (!ft_strncmp(line, "ra\n", 3))
		rotate(stack_a);
	else if (!ft_strncmp(line, "rb\n", 3))
		rotate(stack_b);
	else if (!ft_strncmp(line, "rr\n", 3))
	{
		rotate(stack_a);
		rotate(stack_b);
	}
	else if (!ft_strncmp(line, "pa\n", 3))
		ft_pa(stack_a, stack_b);
	else if (!ft_strncmp(line, "pb\n", 3))
		ft_pb(stack_a, stack_b);
	else
		put_error();
}

void	put_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}
