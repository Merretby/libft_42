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

static void	**free_aloc(char **fr)
{
	size_t	i;

	i = 0;
	while (fr[i])
		free(fr[i++]);
	free (fr);
	return (0);
}

static char	*small_alloc(char const *str, int *index, char separator)
{
	char	*ptr;
	int		len;
	int		pos;
	int		k;

	len = 0;
	k = 0;
	while (str[*index] == separator && str[*index])
		(*index)++;
	pos = *index;
	while (str[*index] != separator && str[*index])
		(*index)++;
	ptr = malloc(sizeof(char) * (*index - pos + 1));
	if (!ptr)
		return (*free_aloc(&ptr));
	len = *index - pos;
	while (k < len)
	{
		ptr[k] = str[pos];
		k++;
		pos++;
	}
	ptr[k] = '\0';
	return (ptr);
}

static int	count_words(char const *str, char c)
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
	int		count;
	int		j;

	j = 0;
	if (s == NULL)
		return (NULL);
	i = 0;
	count = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (NULL);
	ptr[count] = NULL;
	while (j < count)
	{
		ptr[j] = small_alloc(s, &i, c);
		j++;
	}
	return (ptr);
}

/*int main()
{
	char str[] = "...hello..fow..";
	char c = '.';
	char **strs = ft_split(str, c);

	printf("%s", strs[2]);
}*/