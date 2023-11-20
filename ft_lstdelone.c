/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:42:35 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/20 00:54:22 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	del(void *s)
{
	free(s);
}
int main()
{
	char s[] = "hello";
	t_list *node = malloc(sizeof(t_list));
	node->content = malloc(10);
	strcpy(node->content, s);
	node->next = NULL;
	printf("before : %s\n", node->content);
	ft_lstdelone(node, del);
	printf("After : %s", node->content);
}*/
