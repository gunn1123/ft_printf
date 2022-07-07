/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:53:13 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/28 18:56:19 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last = (char *)str;
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return ((char *)last);
}
