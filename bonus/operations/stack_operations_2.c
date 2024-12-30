/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:57:03 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/30 10:37:03 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_push_swap.h"

void	bonus_rra(t_stack **stack)
{
	t_stack	*current;
	t_stack	*b_last;

	current = *stack;
	if (*stack && (*stack)->next)
	{
		while (current->next->next)
			current = current->next;
		b_last = current;
		current = current->next;
		current->next = *stack;
		*stack = current;
		b_last->next = NULL;
	}
}

void	bonus_rrb(t_stack **stack)
{
	t_stack	*current;
	t_stack	*b_last;

	current = *stack;
	if (*stack && (*stack)->next)
	{
		while (current->next->next)
			current = current->next;
		b_last = current;
		current = current->next;
		current->next = *stack;
		*stack = current;
		b_last->next = NULL;
	}
}

void	bonus_rrr(t_stack **a, t_stack **b)
{
	bonus_rra(a);
	bonus_rrb(b);
}
