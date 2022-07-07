/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:39:18 by cthamsur          #+#    #+#             */
/*   Updated: 2022/04/04 15:08:21 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	while ((*str1 && *str2) && (size > 0))
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		size--;
	}
	if (size == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
