/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:34:34 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/30 10:36:41 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_PUSH_SWAP_H
# define BONUS_PUSH_SWAP_H

# include "../includes/push_swap.h"
# include "get_next_line/get_next_line.h"

void	bonus_sa(t_stack **stack);
void	bonus_sb(t_stack **stack);
void	bonus_ss(t_stack **a, t_stack **b);
void	bonus_pa(t_stack **a, t_stack **b);
void	bonus_pb(t_stack **a, t_stack **b);
void	bonus_ra(t_stack **stack);
void	bonus_rb(t_stack **stack);
void	bonus_rr(t_stack **a, t_stack **b);
void	bonus_rra(t_stack **stack);
void	bonus_rrb(t_stack **stack);
void	bonus_rrr(t_stack **a, t_stack **b);

int		sort_stack_bonus(t_stack **a, t_stack **b, char *str);
int		valid_input(char *input_str);
int		ft_strcmp(char *str1, char *str2);
int		prepar_stack(t_stack **a, int argc, char **argv);

#endif
