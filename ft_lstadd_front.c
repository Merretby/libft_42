/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:34:07 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/19 11:06:40 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main()
{
	char i[] = "hello";
	char j[] = "how";
	char k[] = "3003";
	char l[] = "hi";
	
	t_list *head = ft_lstnew(i);
	t_list *node1 = ft_lstnew(j);
	t_list *node2 = ft_lstnew(k);
	t_list *new = ft_lstnew(l);
	ft_lstadd_front(&head, new);
	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	printf("%s", (char*)head->content);
}*/