/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:53:31 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/30 10:27:37 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

static int	check_if_str_digits(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

static int	check_strs(char **strs, int k)
{
	if (check_if_str_digits(strs[k]) == 0 || ft_atoi(strs[k]) > INT_MAX)
	{
		free_strs(strs);
		return (0);
	}
	else
		return (1);
}

int	valid_argument(int c, char **v)
{
	int		i;
	char	**strs;
	int		k;

	i = 0;
	while (++i < c)
	{
		k = -1;
		if (ft_strchr(v[i], ' '))
		{
			strs = ft_split(v[i], ' ');
			if (!strs || !strs[0])
				return (0);
			while (strs[++k])
			{
				if (check_strs(strs, k) == 0)
					return (0);
			}
			free_strs(strs);
		}
		else if (check_if_str_digits(v[i]) == 0 || ft_atoi(v[i]) > INT_MAX)
			return (0);
	}
	return (1);
}

void	get_stack_a(t_stack **a, char **v, int c)
{
	int		i;
	char	**strs;
	int		k;

	i = 0;
	strs = NULL;
	while (++i < c)
	{
		k = -1;
		if (ft_strchr(v[i], ' '))
		{
			strs = ft_split(v[i], ' ');
			while (strs[++k])
				ft_add_back(a, ft_new_node(ft_atoi(strs[k])));
			free_strs(strs);
		}
		else
			ft_add_back(a, ft_new_node(ft_atoi(v[i])));
	}
}
