/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:04:05 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/28 22:42:50 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

//int	valid_input(char *input_str)
//{
//	if (ft_strcmp(input_str, "sa\n") == 0 || ft_strcmp(input_str, "sb\n") == 0
//		|| ft_strcmp(input_str, "ra\n") == 0 || ft_strcmp(input_str,
//			"rb\n") == 0 || ft_strcmp(input_str, "rra\n") == 0
//		|| ft_strcmp(input_str, "rrb\n") == 0 || ft_strcmp(input_str,
//			"pa\n") == 0 || ft_strcmp(input_str, "pb\n") == 0
//		|| ft_strcmp(input_str, "rr\n") == 0 || ft_strcmp(input_str,
//			"rrr\n") == 0)
//	{
//		return (1);
//	}
//	else
//		return (0);
//}

int	sort_stack_bonus(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		bonus_sa(a);
	else if (ft_strcmp(str, "sb\n") == 0)
		bonus_sb(b);
	else if (ft_strcmp(str, "ss\n") == 0)
		bonus_ss(a, b);
	else if (ft_strcmp(str, "ra\n") == 0)
		bonus_ra(a);
	else if (ft_strcmp(str, "rb\n") == 0)
		bonus_rb(b);
	else if (ft_strcmp(str, "rr\n") == 0)
		bonus_rr(a, b);
	else if (ft_strcmp(str, "rra\n") == 0)
		bonus_rra(a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		bonus_rrb(b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		bonus_rrr(a, b);
	else if (ft_strcmp(str, "pa\n") == 0)
		bonus_pa(a, b);
	else if (ft_strcmp(str, "pb\n") == 0)
		bonus_pb(a, b);
	else
		return (0);
	return (1);
}
