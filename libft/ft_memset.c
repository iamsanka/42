/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:22:09 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/20 12:24:33 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *mem, int replace, size_t len)
{
	unsigned char	*ptr;

	ptr = mem;
	while (len > 0)
	{
		*ptr++ = (unsigned char)replace;
		len--;
	}
	return (mem);
}
