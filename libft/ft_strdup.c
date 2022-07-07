/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:04:19 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/28 16:10:49 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *str)
{
	char	*word_dup;
	char	*cpy;

	word_dup = (char *)malloc(ft_strlen(str) + 1);
	if (word_dup == NULL)
		return (NULL);
	cpy = word_dup;
	while (*str)
		*word_dup++ = *(char *)str++;
	*word_dup = '\0';
	return (cpy);
}
