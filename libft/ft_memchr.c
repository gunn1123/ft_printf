/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:18:03 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/27 21:19:37 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*search a memory block for a given value*/

void	*ft_memchr(const void *buffer, int ch, size_t n)
{
	const char	*str;

	str = buffer;
	while (n-- > 0)
	{
		if (*(unsigned char *)str == (unsigned char)ch)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
