/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:18:53 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/26 11:20:10 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			++count;
			while (s[i] && s[i] != c)
				++i;
		}
		else
			++i;
	}
	return (count);
}

static char	**free_arr(char **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		++i;
	}
	free(arr);
	return (NULL);
}

static char	**split_helper(char const *s, char **arr, char c)
{
	size_t	i;
	size_t	idx;
	size_t	start;

	i = 0;
	idx = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				++i;
			arr[idx] = ft_substr(s, start, i - start);
			if (!arr[idx])
				return (free_arr(arr, idx));
			++idx;
		}
		else
			++i;
	}
	arr[idx] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**arr;

	len = get_count(s, c);
	arr = ft_calloc((len + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	return (split_helper(s, arr, c));
}
