/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:02:29 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/30 11:07:51 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_array(int *tab, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	remplier_array(int *tab, t_stack *a)
{
	int	i;

	i = 0;
	if (!a)
		return ;
	while (a)
	{
		tab[i] = a->num;
		a = a->next;
		i++;
	}
	sort_array(tab, i);
}

void	print_array(int *tab, int len)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (i < len)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}

void	set_index(t_stack *a)
{
	t_stack	*head;
	int		size_stack;
	int		*tab;
	int		i;

	head = a;
	size_stack = stack_size(a);
	tab = (int *)malloc(sizeof(int) * size_stack);
	remplier_array(tab, a);
	i = 0;
	while (head)
	{
		i = 0;
		while (i < size_stack)
		{
			if (head->num == tab[i])
			{
				head->index = i;
				break ;
			}
			i++;
		}
		head = head->next;
	}
	free(tab);
}
