/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:36:23 by moer-ret          #+#    #+#             */
/*   Updated: 2023/10/30 20:36:23 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*ptr;

	i = 0;
	x = (unsigned char)c;
	ptr = (unsigned char *)b;
	while (i < n)
	{
		ptr[i] = x;
		i++;
	}
	return (ptr);
}
