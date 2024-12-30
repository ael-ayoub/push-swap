/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:27:43 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/30 10:33:55 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "bonus_push_swap.h"

int	prepar_stack(t_stack **a, int argc, char **argv)
{
	if (argc == 1 || valid_argument(argc, argv) == 0)
	{
		write_error(argc);
		return (0);
	}
	get_stack_a(a, argv, argc);
	if (check_duplicate(*a) == 0)
	{
		write(2, "Error\n", 6);
		free_stack(*a);
		return (0);
	}
	return (1);
}

static void	free_stacks(t_stack *a, t_stack *b)
{
	free_stack(a);
	free_stack(b);
}

static int	stack_sortedd(t_stack *stack)
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

int	read_operations(t_stack **a, t_stack **b)
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer)
	{
		if (sort_stack_bonus(a, b, buffer) == 0)
		{
			free(buffer);
			return (0);
		}
		free(buffer);
		buffer = get_next_line(0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = NULL;
	if (!prepar_stack(&a, argc, argv))
		return (0);
	if (read_operations(&a, &b) == 1)
	{
		if (stack_sortedd(a) == 1)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	else
		write(2, "Error\n", 6);
	free_stacks(a, b);
	return (0);
}
