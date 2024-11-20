/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:05:09 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/20 13:05:25 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source = src;

	dest = dst;
	while (len > 0)
	{
		*dest++ = *source++;
		len--;
	}
	return (dest);
}
