/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_ll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:03:24 by kzarins           #+#    #+#             */
/*   Updated: 2025/01/31 14:07:46 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "ft_ll.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	t_node	*linked_list;
	t_node	*head;

	linked_list = add_node(1);
	add_ll_back_node(linked_list, 5);
	linked_list->next->next = add_node(6);
	linked_list = add_ll_node_head(linked_list, 2);
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
*/