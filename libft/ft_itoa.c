/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:57:33 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/29 21:07:59 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_len(int n)
{
	int	i;
	int	remain;

	i = 0;
	remain = 10;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / remain;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = 0;
	if (n == 0)
		*str = '0';
	if (n < 0)
		*str = '-';
	len--;
	while (len >= 0 && n != 0)
	{
		*(str + len) = ft_abs(n % 10) + '0';
		len--;
		n = n / 10;
	}
	return (str);
}
