/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:37:33 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/20 11:40:32 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str_1, const char *str_2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (((*str_2 != '\0') || (*str_1 != '\0')) && (i <= size))
	{
		if (str_1[i] != str_2[i])
		{
			return ((unsigned char)str_1[i] - (unsigned char)str_2[i]);
		}
		i++;
	}
	return (0);
}
