#include "push_swap.h"


int	check_if_str_digits(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] =='\0')
		return 0;
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

int	check_valid_args(int c, char **v)
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
			if (!strs[0])
				return (0);
			while (strs[++k])
			{
				if (check_if_str_digits(strs[k]) == 0 || ft_atoi(strs[k]) == -1)
					return (0);
			}
			free_strs(strs);
		}
		else if (check_if_str_digits(v[i]) == 0 || ft_atoi(v[i]) == -1)
			return (0);
	}
	return (1);
}


int check_dup(s_list *stack)
{
	s_list *index;
	s_list *j;


	if(!stack)
		return 0;
	index = stack ;

	while (index->next)
	{
		j = index->next;
		while (j)
		{
			if (index->content == j->content)
				return (0);
			j = j->next;
		}
		index = index->next;
	}
	return (1);
}


