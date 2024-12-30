/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:02:37 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/26 11:02:38 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_duplicate(t_stack *stack)
{
	t_stack	*j;

	if (!stack)
		return (0);
	while (stack->next)
	{
		j = stack->next;
		while (j)
		{
			if (stack->num == j->num)
				return (0);
			j = j->next;
		}
		stack = stack->next;
	}
	return (1);
}

int	stack_max(t_stack *a)
{
	int	max;

	max = a->num;
	while (a)
	{
		if (a->num > max)
		{
			max = a->num;
		}
		a = a->next;
	}
	return (max);
}

int	stack_min(t_stack *a)
{
	int	min;

	min = a->num;
	while (a)
	{
		if (a->num < min)
		{
			min = a->num;
		}
		a = a->next;
	}
	return (min);
}
