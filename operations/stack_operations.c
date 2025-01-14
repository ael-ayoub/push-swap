/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:55:46 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/27 22:02:39 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **stack)
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
		printf("sa\n");
	}
}

void	sb(t_stack **stack)
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
		printf("sb\n");
	}
}

void	ss(t_stack **a, t_stack **b)
{
	int	tmp;

	if (*a && (*a)->next)
	{
		tmp = (*a)->num;
		(*a)->num = (*a)->next->num;
		(*a)->next->num = tmp;
	}
	if (*b && (*b)->next)
	{
		tmp = (*b)->num;
		(*b)->num = (*b)->next->num;
		(*b)->next->num = tmp;
	}
	printf("ss\n");
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*b)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
		printf("pa\n");
	}
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
		printf("pb\n");
	}
}
