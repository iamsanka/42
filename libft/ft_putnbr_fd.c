/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:11:31 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/26 11:18:00 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa(int n, char *buf)
{
	long	ln;
	size_t	i;

	ln = n;
	ft_bzero(buf, 16);
	if (ln == 0)
	{
		buf[15] = '0';
		return ;
	}
	i = 15;
	if (ln < 0)
		ln = -ln;
	while (ln != 0)
	{
		buf[--i] = ln % 10 + '0';
		ln /= 10;
	}
	if (n < 0)
		buf[--i] = '-';
}

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[16];
	size_t	i;

	itoa(n, buf);
	i = 0;
	while (i < 16)
	{
		if (buf[i])
			ft_putchar_fd(buf[i], fd);
		++i;
	}
}
