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

void	*ft_memset(void *str, int x, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		ptr[i] = x;
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("\nBefore memset(): %s\n", str);
// 	ft_memset(str, '.', 30*sizeof(char));
// 	printf("After memset():  %s", str);
// 	return 0;
// }