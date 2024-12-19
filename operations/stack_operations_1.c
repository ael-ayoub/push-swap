#include "../includes/push_swap.h"
#include "../libft/libft.h"

void ra(s_list **stack)
{
	if (*stack && (*stack)->next)
	{
		s_list *tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;

		s_list *current = *stack;
		while (current->next)
			current = current->next;
		current->next = tmp;
		printf("ra\n");
	}
}

void rb(s_list **stack)
{
	if (*stack && (*stack)->next)
	{
		s_list *tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;

		s_list *current = *stack;
		while (current->next)
			current = current->next;
		current->next = tmp;
		printf("rb\n");
	}
}

static void helper_rr(s_list **stack)
{
	if (*stack && (*stack)->next)
	{
		s_list *tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;

		s_list *current = *stack;
		while (current->next)
			current = current->next;
		current->next = tmp;
	}
}

void rr(s_list **a, s_list **b)
{
	int rotated = 0;

	if (*a && (*a)->next)
	{
		helper_rr(a);
		rotated = 1;
	}

	if (*b && (*b)->next)
	{
		helper_rr(b);
		rotated = 1;
	}

	if (rotated)
	{
		printf("rr\n");
	}
}
