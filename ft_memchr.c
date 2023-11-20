/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:35:58 by moer-ret          #+#    #+#             */
/*   Updated: 2023/10/30 20:35:58 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	s = (unsigned char *)str;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == ch)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
