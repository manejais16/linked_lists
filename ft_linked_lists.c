#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "ft_ll.h"


int main(void)
{
    t_node  *linked_list;
    t_node  *head;

    linked_list = add_node(1);
    add_ll_back_node(linked_list, 5);
    linked_list->next->next = add_node(6);
    linked_list = add_ll_node_head(linked_list, 2);
    //printf("hello\n");
    add_ll_middle_node(linked_list, 10);
    delete_ll_middle_node(linked_list);
    delete_ll_last_node(linked_list);
    linked_list = delete_ll_node_head(linked_list);
    head = linked_list;
    while (linked_list)
    {
        printf("%d\n", linked_list->value);
        linked_list = linked_list->next;
    }
    delete_ll_all(&head);
    while (head)
    {
        head = head->next;
    }
    return (EXIT_SUCCESS);
}