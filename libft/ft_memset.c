/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:39:03 by cthamsur          #+#    #+#             */
/*   Updated: 2022/04/04 14:41:53 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	size_t			i;
	unsigned char	*head;

	i = 0;
	head = block;
	while (i < size)
	{
		*head++ = (unsigned char) c;
		i++;
	}
	return (block);
}
