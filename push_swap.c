#include "includes/push_swap.h"
#include "libft/libft.h"

s_list *push_swap_1(int c, char **v)
{
	s_list *node;
	int i;
	char **strs;
	int k;

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

s_list *push_swap(int c, char **v)
{
	if (c <= 1)
	{
		printf("error\n");
		return NULL;
	}
	if (check_valid_args(c, v) == 0)
	{
		printf("error\n");
		return NULL;
	}
	s_list *stack = push_swap_1(c, v);
	if (check_dup(stack) == 0)
	{
		printf("error\n");
		free_stack(stack);
		return NULL;
	}
	return (stack);
}

int verified_sort(s_list *a, s_list *b)
{
	if (a->content > b->content)
		return (1);
	else
		return 0;
}
