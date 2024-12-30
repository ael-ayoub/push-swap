/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:55:39 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/28 17:42:29 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_push_swap.h"

void	bonus_ra(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;
		current = *stack;
		while (current->next)
			current = current->next;
		current->next = tmp;
	}
}

void	bonus_rb(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;
		current = *stack;
		while (current->next)
			current = current->next;
		current->next = tmp;
	}
}

void	bonus_rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}
