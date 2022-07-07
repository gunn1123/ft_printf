/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:22:05 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/27 21:24:56 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t size)
{
	int	res;

	while (size-- > 0)
	{
		res = *(unsigned char *)b1 - *(unsigned char *)b2;
		if (res != 0)
			return (res);
		b1++;
		b2++;
	}
	return (0);
}
