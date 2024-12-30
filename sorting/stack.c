/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:02:47 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/26 11:02:48 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp)
	{
		printf("%d[%d]\t", temp->num, temp->index);
		temp = temp->next;
	}
	printf("\n");
}

void	ft_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*last_node;

	if (!new)
		return ;
	last_node = *lst;
	if (!(*lst))
		*lst = new;
	else
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new;
	}
}

t_stack	*ft_new_node(int content)
{
	t_stack	*list;

	list = (t_stack *)malloc(sizeof(t_stack));
	if (!list)
		return (NULL);
	list->num = content;
	list->next = NULL;
	list->index = 0;
	return (list);
}

int	stack_size(t_stack *lst)
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
