#include "includes/push_swap.h"

int main(int c, char **v)
{
	s_list *a = push_swap(c, v);
	sort_stack(&a);
	
	//print_stack(a);
	free_stack(a);
}
