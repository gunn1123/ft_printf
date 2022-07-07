/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:57:47 by cthamsur          #+#    #+#             */
/*   Updated: 2022/04/04 14:55:01 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	mem_len;

	mem_len = n * size;
	ptr = malloc(mem_len);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, mem_len);
	return (ptr);
}
