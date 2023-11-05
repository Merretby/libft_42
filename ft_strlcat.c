/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:37:00 by moer-ret          #+#    #+#             */
/*   Updated: 2023/10/30 20:37:00 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ln_s;
	size_t	ln_d;

	if (size == 0)
		return (0);
	i = 0;
	j = ft_strlen(dest);
	ln_s = ft_strlen(src);
	ln_d = ft_strlen(dest);
	if (size <= ln_d)
		return (size + ln_s);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ln_s + ln_d);
}
