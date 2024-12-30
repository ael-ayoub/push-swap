/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:55:46 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/28 17:35:30 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_push_swap.h"

void	bonus_sa(t_stack **stack)
{
	int	num;
	int	index;

	if (*stack && (*stack)->next)
	{
		num = (*stack)->num;
		index = (*stack)->index;
		(*stack)->num = (*stack)->next->num;
		(*stack)->index = (*stack)->next->index;
		(*stack)->next->num = num;
		(*stack)->next->index = index;
	}
}

void	bonus_sb(t_stack **stack)
{
	int	num;
	int	index;

	if (*stack && (*stack)->next)
	{
		num = (*stack)->num;
		index = (*stack)->index;
		(*stack)->num = (*stack)->next->num;
		(*stack)->index = (*stack)->next->index;
		(*stack)->next->num = num;
		(*stack)->next->index = index;
	}
}

void	bonus_ss(t_stack **a, t_stack **b)
{
	bonus_sb(b);
	bonus_sa(a);
}

void	bonus_pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*b)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
	}
}

void	bonus_pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
	}
}
