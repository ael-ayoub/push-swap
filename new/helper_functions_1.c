#include "push_swap.h"

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
