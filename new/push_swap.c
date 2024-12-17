#include "push_swap.h"
#include "../libft/libft.h"


s_list	*push_swap_1(int c, char **v)
{
	s_list	*node;
	int		i;
	char	**strs;
	int		k;

	node = NULL;
	i = 0;
	strs = NULL;
	while (++i < c)
	{
		k = -1;
		if (ft_strchr(v[i], ' '))
		{
			strs = ft_split(v[i], ' ');
			while (strs[++k])
				ft_add_front(&node, ft_new_node(ft_atoi(strs[k])));
			free_strs(strs);
		}
		else
			ft_add_front(&node, ft_new_node(ft_atoi(v[i])));
	}
	return (node);
}



void push_swap(int c, char **v)
{
	if (c <= 1)
	{
		printf("error\n");
		return ;
	}
	if (check_valid_args(c,v) == 0)
	{
		printf("error\n");
		return ;
	}
	s_list *stack = push_swap_1(c,v);
	if (check_dup(stack) == 0)
	{
		printf("error\n");
		free_stack(stack);
		return ;
	}

	ft_rev_rotate(stack,'a');
	while (stack)
	{
		printf("%d\n",stack->content);
		stack =stack->next;
	}
	
}

//s_list *sort_stack(s_list *stack)
//{

//}
