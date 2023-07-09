/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:13:51 by asenel            #+#    #+#             */
/*   Updated: 2023/07/07 18:31:58 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;
	unsigned char *d;
	const unsigned char *s;

	c = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if (!d || (s == NULL && n > 0))
		return (NULL);
	while (c < n)
	{
		d[c] = s[c];
		c++;
	}
	return (dest);
}

