/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:20:54 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/19 10:52:27 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	t_list *node3= ft_lstnew(l);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%d", ft_lstsize(head));
}*/
