/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:35:11 by moer-ret          #+#    #+#             */
/*   Updated: 2023/10/30 20:35:11 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aloc;

	if (count != 0 && count > 4294967295 / size)
		return (NULL);
	aloc = malloc(size * count);
	if (!aloc)
		return (NULL);
	ft_bzero (aloc, size * count);
	return (aloc);
}
