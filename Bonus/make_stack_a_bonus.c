/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:32:47 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 17:38:28 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_list	*make_stack_a(char **av)
{
	t_list	*stack_a;

	handel_first_arg(&stack_a, av[1]);
	handel_other_args(&stack_a, av);
	return (stack_a);
}

void	handel_first_arg(t_list **stack_a, char *av_1)
{
	char	**split;
	int		j;
	t_list	*tmp;

	split = ft_split(av_1, ' ');
	if (is_spaces(av_1) || !is_number(split[0]))
		ft_free_and_exit(split);
	*stack_a = ft_lstnew(ft_atoi(split[0]));
	j = 0;
	while (split[++j])
	{
		if (is_number(split[j]))
		{
			tmp = ft_lstnew(ft_atoi(split[j]));
			ft_lstadd_back(stack_a, tmp);
		}
		else
			ft_free_and_exit(split);
	}
	ft_free(split);
}

void	handel_other_args(t_list **stack_a, char **av)
{
	t_list	*tmp;
	int		i;
	int		j;
	char	**split;

	i = 2;
	while (av[i])
	{
		j = 0;
		split = ft_split(av[i], ' ');
		if (is_spaces(av[i++]))
			ft_free_and_exit(split);
		while (split[j])
		{
			if (is_number(split[j]))
			{
				tmp = ft_lstnew(ft_atoi(split[j++]));
				ft_lstadd_back(stack_a, tmp);
			}
			else
				ft_free_and_exit(split);
		}
		ft_free(split);
	}
}

void	ft_free_and_exit(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	str = NULL;
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	str = NULL;
}
