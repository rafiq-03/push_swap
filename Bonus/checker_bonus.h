/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:55:22 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 19:36:32 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "../Libft/libft.h"
# include "gnl/get_next_line.h"

t_list	*make_stack_a(char **av);
void	handel_first_arg(t_list **stack_a, char *av_1);
void	handel_other_args(t_list **stack_a, char **av);
void	ft_free_and_exit(char **str);
void	ft_free(char **str);
void	put_error(void);

void	handel_input(char *line, t_list **stack_a, t_list **stack_b);
void	handel_input_1(char *line, t_list **stack_a, t_list **stack_b);
int		is_sorted(t_list *stack_a);
int		is_spaces(char *str);
int		is_number(char *str);
int		is_dublicate(t_list *stack_a);
void	duplicate(t_list **stack_a);
void	ft_sort_first(t_list *stack_a, int size);
t_list	*init_stack_a(int ac, char **av);

void	swap(t_list **stack);
void	rotate(t_list **stack);
void	rrotate(t_list **stack);

void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);

#endif
