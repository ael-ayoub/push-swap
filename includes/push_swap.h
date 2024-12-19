#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

#include "../libft/libft.h"

typedef struct s_list
{
	int content;
	struct s_list *next;
} s_list;

s_list *push_swap_1(int c, char **args);
int check_valid_args(int c, char **v);
int check_if_str_digits(char *str);
void free_strs(char **strs);
void free_stack(s_list *stack);
s_list *push_swap(int c, char **v);
int check_dup(s_list *stack);
void ft_add_front(s_list **lst, s_list *new);
s_list *ft_new_node(int content);

/* helper function 2 */

void sa(s_list **stack);
void sb(s_list **stack);
void ss(s_list **a, s_list **b);
void pa(s_list **a, s_list **b);
void pb(s_list **a, s_list **b);
void ra(s_list **stack);
void rb(s_list **stack);
void rr(s_list **a, s_list **b);
void rra(s_list **stack);
void rrb(s_list **stack);
void rrr(s_list **a, s_list **b);
// test function

void push(s_list **stack, int content);
int verified_sorted(s_list *stack);
void sort_stack(s_list **stack);
void print_stack(s_list *stack);
int *stack_midle(s_list *stack);
int	stack_size(s_list *lst);

#endif
