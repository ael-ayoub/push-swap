#include "../includes/push_swap.h"

void	ft_add_front(s_list **lst, s_list *new)
{
	if (!new)
        return;
	new->next = *lst;
	*lst = new;
}

s_list	*ft_new_node(int content)
{
	s_list	*list;
	list = (s_list *)malloc(sizeof(s_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

int verified_sorted(s_list *stack)
{
	s_list *stack_j;
	if (!stack)
		return (0);
	while (stack->next)
	{
		stack_j = stack->next;
		while (stack_j)
		{
			if (stack_j->content > stack->content)
				return 0;
			stack_j = stack_j->next;
		}
		stack = stack->next;
	}
	return 1;
}

int	stack_size(s_list *lst)
{
	int	lenght;

	lenght = 0;
	while (lst)
	{
		lenght++;
		lst = lst->next;
	}
	return (lenght);
}
