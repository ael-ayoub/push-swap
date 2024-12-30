/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:02:44 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/26 11:02:45 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	get_index_position(t_stack **a, int chunk)
{
	t_stack	*head;
	int		i;

	head = *a;
	i = 0;
	while (i < stack_size(head))
	{
		if (head->index < chunk)
			break ;
		head = head->next;
		i++;
	}
	return (i);
}

static int	get_max_position(t_stack *a, int max)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->num == max)
			break ;
		a = a->next;
		i++;
	}
	return (i);
}

void	push_to_a(t_stack **a, t_stack **b)
{
	int	max;
	int	max_position;

	max = stack_max(*b);
	max_position = get_max_position(*b, max);
	while (stack_size(*b) > 0)
	{
		if (max == (*b)->num)
		{
			pa(a, b);
			if (stack_size(*b) > 0)
			{
				max = stack_max(*b);
				max_position = get_max_position(*b, max);
			}
		}
		else
		{
			if (max_position <= stack_size(*b) / 2)
				rb(b);
			else
				rrb(b);
		}
	}
}

void	push_to_b(t_stack **a, t_stack **b, int chunk)
{
	int	i;
	int	len;

	i = 0;
	len = stack_size(*a);
	while (i < len)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= (i + chunk))
		{
			pb(a, b);
			i++;
		}
		else if (get_index_position(a, (chunk + i)) < (stack_size(*a) / 2))
			ra(a);
		else
			rra(a);
	}
	push_to_a(a, b);
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_size(*a);
	set_index(*a);
	if (len == 2)
		sort_2(a);
	else if (len == 3)
		sort_3(a);
	else if (len == 4)
		sort_4(a, b);
	else if (len == 5)
		sort_5(a, b);
	else if (len < 250)
		push_to_b(a, b, 21);
	else
		push_to_b(a, b, 34);
}
