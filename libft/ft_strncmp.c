/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:41:03 by asenel            #+#    #+#             */
/*   Updated: 2023/07/05 18:57:45 by asenel           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	c;

	if (n == 0)
		return (0);
	c = 0;
	while ((str1[c] == str2[c]) && (str1[c] || str2[c]) && c < n - 1)
		c++;
	return ((unsigned char)str1[c] - (unsigned char)str2[c]);
}
