/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:25:53 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/20 06:59:06 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	d_count(int n)
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

static	void	*min(char *res, int *n)
{
	res[0] = '-';
	res[1] = '2';
	*n = 147483648;
	return (0);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		count;

	count = d_count(n);
	res = malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = '\0';
	if (n == -2147483648)
		min(res, &n);
	else if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	else if (n == 0)
		res[0] = '0';
	while (n)
	{
		res[--count] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
