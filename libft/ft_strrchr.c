/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:35:10 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/20 11:40:37 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int find)
{
	const char	*last;

	while (*str)
	{
		if (*str == (char)find)
		{
			last = str;
		}
		str++;
	}
	if (find == '\0')
	{
		return ((char *)str);
	}
	return ((char *)last);
}
