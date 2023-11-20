/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:10:06 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/20 01:35:13 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*void del(void *s)
{
	free(s);
}
int main()
{
	char s[] = "hello";
	char f[] = "wow";
	t_list *node = malloc(sizeof(t_list));
	t_list *node1 = malloc(sizeof(t_list));
	node->content = malloc(6);
	node1->content = malloc(4);
	strcpy(node->content, s);
	strcpy(node1->content, f);
	node->next = node1;
	node1->next = NULL;
	printf("before : %s\n", node->next->content);
	ft_lstclear(&node, del);
	printf("After : %s", node->content);
}*/
