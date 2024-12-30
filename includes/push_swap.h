/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:05:11 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/28 14:04:57 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct stack
{
	int				num;
	int				index;
	struct stack	*next;
}					t_stack;

//libft --------->
long double			ft_atoi(char *str);
char				*ft_strchr(const char *s, int c);
char				**free_array(char **ptr, int i);
char				**ft_split(char const *s, char c);
void				ft_add_back(t_stack **lst, t_stack *new);
t_stack				*ft_new_node(int content);

//operation stack ----------->
void				ra(t_stack **stack);
void				rb(t_stack **stack);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				sa(t_stack **stack);
void				sb(t_stack **stack);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);

// prepare stack array  ---------------->
int					valid_argument(int c, char **v);
void				sort_array(int *tab, int len);
void				remplier_array(int *tab, t_stack *a);
void				print_array(int *tab, int len);
int					check_duplicate(t_stack *stack);

//free memory ------------>
void				free_strs(char **strs);
void				free_stack(t_stack *stack);

//sort stack -------------->
void				sort_2(t_stack **a);
void				sort_3(t_stack **a);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);

// stack actions -------------->
int					stack_size(t_stack *lst);
int					stack_max(t_stack *a);
int					stack_min(t_stack *a);
int					stack_sorted(t_stack *stack);
void				set_index(t_stack *a);
void				sort_stack(t_stack **a, t_stack **b);
void				print_stack(t_stack *stack);
void				push_to_a(t_stack **a, t_stack **b);
void				push_to_b(t_stack **a, t_stack **b, int chunk);
void				get_stack_a(t_stack **a, char **v, int c);
void				write_error(int i);

#endif
