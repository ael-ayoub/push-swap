/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:55:39 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/26 10:55:40 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **stack)
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
		printf("ra\n");
	}
}

void	rb(t_stack **stack)
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
		printf("rb\n");
	}
}

static void	helper_rr(t_stack **stack)
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

void	rr(t_stack **a, t_stack **b)
{
	int	rotated;

	rotated = 0;
	if (*a && (*a)->next)
	{
		helper_rr(a);
		rotated = 1;
	}
	if (*b && (*b)->next)
	{
		helper_rr(b);
		rotated = 1;
	}
	if (rotated)
	{
		printf("rr\n");
	}
}
