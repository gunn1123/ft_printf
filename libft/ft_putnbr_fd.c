/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:16:14 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/29 14:21:38 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	print_num(int nbr, int fd)
{
	char	*base;
	char	num;
	int		remain;

	base = "0123456789";
	if (nbr / 10 != 0)
		print_num((nbr / 10), fd);
	remain = nbr % 10;
	if (remain < 0)
		remain = -remain;
	num = base[remain];
	ft_putchar_fd(num, fd);
}

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
		ft_putchar_fd('-', fd);
	print_num(nbr, fd);
}
