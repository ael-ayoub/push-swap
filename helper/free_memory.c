#include "../includes/push_swap.h"
#include "../libft/libft.h"


void free_strs(char **strs)
{
	int i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void free_stack(s_list *stack)
{
    s_list *index;

    while (stack)
    {
        index = stack->next;
        free(stack);
        stack = index;
    }
}
