/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:54:04 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/12/28 17:24:24 by ael-aiss         ###   ########.fr       */
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

static int	ft_space(const char *str, int *p)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*p = i;
	return (sign);
}

long double	ft_atoi(char *str)
{
	int			i;
	int			s;
	long double	nbr;

	s = ft_space(str, &i);
	nbr = 0;
	if (s == -1 && ft_isdigit(str[i]) == 0)
		return (-1);
	while (ft_isdigit(str[i]) == 1)
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	nbr = nbr * s;
	if (nbr > 2147483647 || nbr < -2147483648)
		return ((long)INT_MAX + 2);
	return (nbr);
}
