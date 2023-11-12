/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:36:42 by moer-ret          #+#    #+#             */
/*   Updated: 2023/10/30 20:36:42 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	x;

	i = 0;
	x = (char)c;
	while (str[i] != x)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)str + i);
}

/*int main()
{
	char *str = "Hello World";
	char *ptr;
	ptr = ft_strchr(str, 'o');
	printf("%s", ptr);
	return (0);
}*/