#include "includes/push_swap.h"
#include "libft/libft.h"

void sort_stack(s_list **stack)
{
	s_list *b = NULL;
	s_list **a = stack;

	int *midle = stack_midle(*a);
	int size = stack_size(*a);
	int i = 0;
	while (i++ < size)
	{
		if ((*a)->content < *midle)
			pb(a,&b);
		else 
			ra(a);
		printf("midle = %d | a = %d \n",*midle,(*a)->content);
	}
	

	print_stack(*a);	
	print_stack(b);	
}
