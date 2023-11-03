/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:36:27 by moer-ret          #+#    #+#             */
/*   Updated: 2023/10/30 20:36:27 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *str, char c)
{
	size_t	wo;
	size_t	i;

	wo = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			wo++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (wo);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		len;
	int		j;
	int		k;

	if (s == NULL)
		return (NULL);
	j = 0;
	i = 0;
	ptr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		len = i;
		while (s[i] != c && s[i])
			i++;
		if (i > len)
		{
			ptr[j] = malloc(sizeof(char) * (i - len + 1));
			if (!ptr[j])
				return (NULL);
			k = 0;
			while (k < i - len)
			{
				ptr[j][k] = s[len + k];
				k++;
			}
			ptr[j][k] = '\0';
			j++;
		}
	}
	ptr[j] = 0;
	return (ptr);
	free (ptr);
}
