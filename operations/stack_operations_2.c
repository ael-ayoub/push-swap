/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:57:03 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/27 19:16:08 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	helper_rr(t_stack **stack)
{
	int		rotate;
	t_stack	*current;
	t_stack	*b_last;

	rotate = 0;
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
		rotate = 1;
	}
	return (rotate);
}

void	rra(t_stack **a)
{
	if (helper_rr(a) == 1)
		printf("rra\n");
}

void	rrb(t_stack **b)
{
	if (helper_rr(b) == 1)
		printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	int	rotate_a;
	int	rotate_b;

	rotate_a = helper_rr(a);
	rotate_b = helper_rr(b);
	if (rotate_a || rotate_b)
		printf("rrr\n");
}
