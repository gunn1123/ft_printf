/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:31:35 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/27 21:40:41 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char					*head_str1;
	const unsigned char		*ptr_const;
	size_t					i;	

	i = 0;
	head_str1 = str1;
	ptr_const = str2;
	if (!str1 && !str2)
		return (str1);
	if (str1 < str2)
	{
		while (i++ < n)
			*head_str1++ = *ptr_const++;
	}
	else
	{
		head_str1 += n;
		ptr_const += n;
		while (n-- != 0)
			*--head_str1 = *--ptr_const;
	}
	return (str1);
}
