/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:06:22 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/29 20:12:19 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	pos;
	char			*str;

	if (!s)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	pos = 0;
	while (pos < len)
	{
		*(str + pos) = *(s + pos);
		*(str + pos) = (*f)(pos, *(str + pos));
		pos++;
	}
	*(str + pos) = '\0';
	return (str);
}
