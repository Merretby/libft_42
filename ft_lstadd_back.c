/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:58:47 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/19 12:35:18 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	else if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
/*int main()
{
	char a[] = "hello";
	char b[] = "how";
	char c[] = "are";
	char d[] = "you";
	char e[] = "u";
	t_list *tmp;
	t_list *head = ft_lstnew(a);
	t_list *node1 = ft_lstnew(b);
	t_list *node2 = ft_lstnew(c);
	t_list *node3 = ft_lstnew(d);
	t_list *lst = ft_lstnew(e);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstadd_back(&head, lst);
	tmp = head;
	while(tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
}*/