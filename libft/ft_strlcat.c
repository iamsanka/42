/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:30:49 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/26 13:56:39 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (!dst && !size)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = 0;
	while (len_dst + i < size - 1 && src[i])
	{
		dst[len_dst + i] = src[i];
		++i;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}
