/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:53:23 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/19 11:16:04 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int main()
{
	char a[] = "hello";
	char b[] = "how";
	char c[] = "are";
	char d[] = "you";

	t_list *head = ft_lstnew(a);
	t_list *node1 = ft_lstnew(b);
	t_list *node2 = ft_lstnew(c);
	t_list *node3 = ft_lstnew(d);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	t_list *lst = ft_lstlast(head);
	printf("%s", lst->content);
}
*/