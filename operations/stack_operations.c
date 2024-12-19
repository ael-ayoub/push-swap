#include "../includes/push_swap.h"
#include "../libft/libft.h"

void sa(s_list **stack)
{
    if (*stack && (*stack)->next)
    {
        int tmp = (*stack)->content;
        (*stack)->content = (*stack)->next->content;
        (*stack)->next->content = tmp;
        printf("sa\n");
    }
}

void sb(s_list **stack)
{
    if (*stack && (*stack)->next)
    {
        int tmp = (*stack)->content;
        (*stack)->content = (*stack)->next->content;
        (*stack)->next->content = tmp;
        printf("sb\n");
    }
}

void ss(s_list **a, s_list **b)
{
    if (*a && (*a)->next)
    {
        int tmp = (*a)->content;
        (*a)->content = (*a)->next->content;
        (*a)->next->content = tmp;
    }
    if (*b && (*b)->next)
    {
        int tmp = (*b)->content;
        (*b)->content = (*b)->next->content;
        (*b)->next->content = tmp;
    }
    printf("ss\n");
}

void pa(s_list **a, s_list **b)
{
    if (*b)
    {
        s_list *tmp = *b;
        *b = (*b)->next;
        tmp->next = *a;
        *a = tmp;
        printf("pa\n");
    }
}

void pb(s_list **a, s_list **b)
{
    if (*a)
    {
        s_list *tmp = *a;
        *a = (*a)->next;
        tmp->next = *b;
        *b = tmp;
        printf("pb\n");
    }
}
