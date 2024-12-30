/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:04:27 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/30 10:33:24 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	stack_sorted(t_stack *stack)
{
	t_stack	*stack_j;

	if (!stack)
		return (0);
	while (stack->next)
	{
		stack_j = stack->next;
		while (stack_j)
		{
			if (stack_j->num < stack->num)
				return (0);
			stack_j = stack_j->next;
		}
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || valid_argument(argc, argv) == 0)
	{
		write_error(argc);
		return (0);
	}
	get_stack_a(&a, argv, argc);
	if (check_duplicate(a) == 0)
	{
		write(2, "Error\n", 6);
		free_stack(a);
		return (0);
	}
	else if (stack_sorted(a) == 0)
		sort_stack(&a, &b);
	free_stack(a);
	free_stack(b);
	return (0);
}
