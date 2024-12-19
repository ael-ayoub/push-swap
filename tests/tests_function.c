#include "../includes/push_swap.h"

// Helper function to create a new node
s_list *new_node(int content) {
    s_list *new = (s_list *)malloc(sizeof(s_list));
    if (new) {
        new->content = content;
        new->next = NULL;
    }
    return new;
}

// Helper function to push an element onto the stack
void push(s_list **stack, int content) {
    s_list *new = new_node(content);
    new->next = *stack;
    *stack = new;
}

// Function to print the stack
void print_stack(s_list *stack) {
    while (stack) {
        printf("%d ", stack->content);
        stack = stack->next;
    }
    printf("\n");
}
