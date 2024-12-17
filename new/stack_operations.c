#include "push_swap.h"
#include "../libft/libft.h"

// ss ---> a and b at the same time
void ft_swap(s_list **stack, char c)
{
	int tmp;
	s_list *index;
	if (stack && *stack && (*stack)->next)
	{
		index = (*stack)->next;

		tmp = (*stack)->content;
		(*stack)->content = index->content;
		index->content = tmp;
		printf("s%c\n", c);
	}
}

 void ft_push(s_list *a, s_list *b,char c)
{
	if(b)
	{
		ft_add_front(&a,b);
		printf("p%c\n",c);
	}
}

// rr ---> rotate a and b at the same time
 void ft_rotate(s_list *stack, char c)
{
	s_list *head;

	head = stack;
	int tmp = stack->content;
	while (head->next)
	{
		head->content = head->next->content;
		head = head->next;
	}
	head->content = tmp;
	printf("r%c\n",c);
}


 void ft_rot(s_list *stack)
{
	s_list *head;

	head = stack;
	int tmp = stack->content;
	while (head->next)
	{
		head->content = head->next->content;
		head = head->next;
	}
	head->content = tmp;
}
// rrr --->reverce rotate  a and b at the same time
  void ft_rev_rotate(s_list *stack, char c)
{
    s_list *last = stack;
    int i = 0;
    while (last->next)
    {
      i++;
      last = last->next; 
    }
    while (i>0)
    {
        ft_rot(stack);
        i--;
    }
    printf("rr%c\n",c);
}
