#include "../includes/push_swap.h"
#include "../libft/libft.h"

static int helper_rr(s_list **stack)
{
  int rotate = 0;
  if (*stack && (*stack)->next)
  {
    s_list *prev = NULL, *current = *stack;
    while (current->next)
    {
      prev = current;
      current = current->next;
    }
    current->next = *stack;
    *stack = current;
    prev->next = NULL;
    rotate = 1;
  }
  return rotate;
}

void rra(s_list **a)
{
  if (helper_rr(a) == 1)
    printf("rra\n");
}

void rrb(s_list **b)
{
  if (helper_rr(b) == 1)
    printf("rrb\n");
}

void rrr(s_list **a, s_list **b)
{
  int rotate_a = helper_rr(a);
  int rotate_b = helper_rr(b);
  if (rotate_a || rotate_b)
    printf("rrr\n");
}
