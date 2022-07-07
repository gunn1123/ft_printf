/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:54:44 by cthamsur          #+#    #+#             */
/*   Updated: 2022/04/04 15:16:44 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*con_str;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	con_str = (char *)malloc(len + 1);
	if (con_str == NULL)
		return (NULL);
	ft_strlcpy(con_str, s1, len + 1);
	ft_strlcat(con_str, s2, len + 1);
	return (con_str);
}
