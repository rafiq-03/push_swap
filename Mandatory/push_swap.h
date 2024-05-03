/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:55:22 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/05/01 18:16:04 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../Libft/libft.h"

t_list	*make_stack_a(char **av);
void	handel_first_arg(t_list **stack_a, char *av_1);
void	handel_other_args(t_list **stack_a, char **av);
void	ft_free_and_exit(char **str);
void	ft_free(char **str);

int		is_sorted(t_list *stack_a);
int		is_spaces(char *str);
int		is_number(char *str);
int		is_dublicate(t_list *stack_a);
void	duplicate(t_list **stack_a);
void	ft_sort_first(t_list *stack_a, int size);
t_list	*init_stack_a(int ac, char **av);

void	swap(t_list **stack);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);

void	rotate(t_list **stack);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);

void	rrotate(t_list **stack);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);

void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack_a);
void	sort_two(t_list **stack_a);

int		ft_range(int size);
void	ft_range_sort(t_list **stack_a, t_list **stack_b);
void	ft_push_to_b(t_list **stack_a, t_list **stack_b, int size);
int		ft_min(t_list *stack);
int		ft_max(t_list *stack);
int		min_search(t_list *stack, int min);
int		max_search(t_list *stack, int max);

#endif
