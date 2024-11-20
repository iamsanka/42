/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:35:56 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/20 13:36:01 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source = src;

	dest = dst;
	if (dest < source)
	{
		while (len--)
		{
			*dest++ = *source++;
		}
	}
	else
	{
		dest += len;
		source += len;
		while (len--)
		{
			*--dest = *--source;
		}
	}
	return (dest);
}
