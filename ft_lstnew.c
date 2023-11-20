/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:00:45 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/19 07:50:15 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*int main()
{
	char s[] = "hello";
	t_list *p = ft_lstnew(s);
	printf("%s", p->content);
}*/
/*int main()
{
	int i = 666;
	t_list *p = ft_lstnew(&i);
	printf("%d", (*(int *)p->content));
}*/