/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:38:57 by moer-ret          #+#    #+#             */
/*   Updated: 2023/10/30 20:38:57 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_doubles(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	size_t	e;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	f = 0;
	e = ft_strlen(s1) - 1;
	while (s1[f] && check_doubles(s1[f], set))
		f++;
	while (e > f && check_doubles(s1[e], set))
		e--;
	ptr = malloc(sizeof(char) * (e - f) + 2);
	if (!ptr)
		return (NULL);
	while (e >= f)
	{
		ptr[i] = s1[f];
		i++;
		f++;
	}
	ptr[i] = '\0';
	return (ptr);
}
