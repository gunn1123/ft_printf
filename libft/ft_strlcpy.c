/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:57:15 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/28 19:00:46 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	offset;

	offset = 0;
	if (size > 0)
	{
		while (*src && offset + 1 < size)
		{
			*dst++ = *src++;
			offset++;
		}
	}
	if (offset < size)
		*dst = '\0';
	while (*src++)
		offset++;
	return (offset);
}
