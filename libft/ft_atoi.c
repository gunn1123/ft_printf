/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:39:03 by cthamsur          #+#    #+#             */
/*   Updated: 2022/04/04 14:52:24 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{	
	int	n;
	int	mn;

	mn = 1;
	n = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			mn = mn * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10;
		n += (*str - '0');
		str++;
	}
	return (n * mn);
}
