/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_doubly.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:38:53 by vsergio           #+#    #+#             */
/*   Updated: 2023/01/11 17:20:40 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addfront_doubly(t_doubly_list **list)
{
	t_doubly_list	*test_previous;
	t_doubly_list	*new_node;
	t_doubly_list	*node;
	char			*cast;

	test_previous = malloc(sizeof(t_doubly_list));
	test_previous->string = "Test previous";
	new_node = malloc(sizeof(t_doubly_list));
	new_node->string = "New first";
	new_node->previous = test_previous;
	if (*list)
	{
		new_node->next = *list;
		*list = new_node;
	}
	else
		*list = new_node;
	node = *list;
	while (node)
	{
		cast = (char *)node->string;
		ft_printf("Current node content: %s\n", cast);
		node = node->previous;
	}
}

// int main(void)
// {
//     t_doubly_list **lista;
//     t_doubly_list *node1;
//     t_doubly_list *node2;
//     t_doubly_list *node3;
//     lista = malloc(sizeof(t_doubly_list));
//     node1 = malloc(sizeof(t_doubly_list));
//     node2 = malloc(sizeof(t_doubly_list));
//     node3 = malloc(sizeof(t_doubly_list));

//     node1->string = "First";
//     node1->next = node2;

//     node2->string = "Second";
//     node2->next = node3;

//     node3->string = "Third";
//     node3->next = NULL;
//     lista = &node1;

//     ft_addfront_doubly(lista);
// }
