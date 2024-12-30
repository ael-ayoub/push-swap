/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:02:33 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/30 10:33:45 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	write_error(int i)
{
	if (i != 1)
		write(2, "Error\n", 6);
}

void	free_strs(char **strs)
{
	int	i;

	i = 0;
	if (!*strs)
		return ;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	strs = NULL;
}

void	free_stack(t_stack *stack)
{
	t_stack	*index;

	if (!stack)
		return ;
	while (stack)
	{
		index = stack->next;
		free(stack);
		stack = index;
	}
	stack = NULL;
}
