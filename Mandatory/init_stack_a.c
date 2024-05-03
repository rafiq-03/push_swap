/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:18:58 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/04/27 14:44:18 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_index(t_list **stack_a, int *nb, int size);

t_list	*init_stack_a(int ac, char **av)
{
	t_list	*stack_a;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	stack_a = make_stack_a(av);
	duplicate(&stack_a);
	ft_sort_first(stack_a, ft_lstsize(stack_a));
	return (stack_a);
}

int	*fill_array(t_list *stack)
{
	int	*nbs;
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(stack);
	nbs = malloc(sizeof(int) * size);
	while (stack)
	{
		nbs[i++] = stack->nb;
		stack = stack->next;
	}
	return (nbs);
}

void	ft_sort_first(t_list *stack_a, int size)
{
	int	*nb;
	int	tmp;
	int	a;
	int	b;

	nb = fill_array(stack_a);
	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (nb[a] > nb[b])
			{
				tmp = nb[a];
				nb[a] = nb[b];
				nb[b] = tmp;
			}
			b++;
		}
		a++;
	}
	put_index(&stack_a, nb, size);
	free(nb);
}

static void	put_index(t_list **stack_a, int *nb, int size)
{
	t_list	*tmp;
	int		i;

	tmp = *stack_a;
	i = 0;
	while (i < size)
	{
		while (tmp)
		{
			if (tmp->nb == nb[i])
			{
				tmp->index = i;
				break ;
			}
			tmp = tmp->next;
		}
		tmp = *stack_a;
		i++;
	}
}
