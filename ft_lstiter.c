/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:37:30 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/20 02:32:23 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void func(void *s)
{
	char *d = (char *)s;
	int i = ft_strlen(s);
	while (i >= 0)
	{
		if (d[i])
			d[i] = (d[i] + 1);
		i--;
	}
}
int main()
{
	char s[] = "abcd";
	t_list *node = malloc(sizeof(t_list));
	node->content = malloc(6);
	strcpy(node->content, s);
	node->next = NULL;
	ft_lstiter(node, func);
	printf("%s", node->content);
}*/