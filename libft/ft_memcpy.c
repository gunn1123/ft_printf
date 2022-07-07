/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:27:57 by cthamsur          #+#    #+#             */
/*   Updated: 2022/04/04 14:58:21 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_const;
	char	*dest_head;

	i = 0;
	if (!dest && !src)
		return (dest);
	ptr_const = (char *)src;
	dest_head = dest;
	while (i < n)
	{
		*dest_head++ = *ptr_const++;
		i++;
	}
	return (dest);
}
