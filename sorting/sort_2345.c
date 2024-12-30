/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2345.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:02:41 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/28 16:17:10 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack **a)
{
	if (!a || !(*a) || !(*a)->next)
		return ;
	if ((*a)->next->num < (*a)->num)
		sa(a);
}

void	sort_3(t_stack **a)
{
	int	max;

	max = stack_max(*a);
	if ((*a)->num == max)
		ra(a);
	else if ((*a)->next->num == max)
		rra(a);
	if ((*a)->next->num < (*a)->num)
		sa(a);
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	max;

	max = stack_max(*a);
	if ((*a)->num == max)
		pb(a, b);
	else if ((*a)->next->num == max)
	{
		ra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->num == max)
	{
		rra(a);
		rra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->next->num == max)
	{
		rra(a);
		pb(a, b);
	}
	sort_3(a);
	pa(a, b);
	ra(a);
}

static void	rotate_and_push(t_stack **a, t_stack **b)
{
	rra(a);
	rra(a);
	pb(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	min;

	min = stack_min(*a);
	if ((*a)->num == min)
		pb(a, b);
	else if ((*a)->next->num == min)
	{
		ra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->num == min)
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	else if ((*a)->next->next->next->num == min)
		rotate_and_push(a, b);
	else if ((*a)->next->next->next->next->num == min)
	{
		rra(a);
		pb(a, b);
	}
	sort_4(a, b);
	pa(a, b);
}
