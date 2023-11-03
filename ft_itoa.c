/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:25:53 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/03 23:24:57 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	d_count(int n)
{
	int	x;

	x = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		x++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		x++;
	}
	if (x == 0)
		x = 1;
	return (x);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		count;

	count = d_count(n);
	if (!(res = malloc(sizeof(char) * (count + 1))))
		return (NULL);
	res[count] = '\0';
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = 2;
		n = 147483648;
		count = count - 1;
	}
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (--count >= 0)
	{
		res[count] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}

// int	main(void)
// {
// 	char*  x = ft_itoa(1000);
// 	printf("%s\n", x);
// 	return 0;
// }
