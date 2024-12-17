#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdint.h>

 #include "../libft/libft.h"



typedef struct s_list{
	int			content;
	struct s_list	*next;
}	s_list;


s_list *push_swap_1(int c ,char **args);
void push_swap(int c ,char **args);
int check_valid_args(int c , char **v);
int	check_if_str_digits(char *str);
void free_strs(char **strs);
void free_stack(s_list *stack);
void push_swap(int c, char **v);
int check_dup(s_list *stack);
void	ft_add_front(s_list **lst, s_list *new);
s_list	*ft_new_node(int content);


/* helper function 2 */

void ft_swap(s_list **stack, char c);
void ft_push(s_list *a, s_list *b,char c);
 void ft_rotate(s_list *stack, char c);
  void ft_rev_rotate(s_list *stack, char c);

#endif
