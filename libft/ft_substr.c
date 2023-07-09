/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:33:11 by asenel            #+#    #+#             */
/*   Updated: 2023/07/09 13:14:06 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	c;
	char	*str;

	c = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!s || !str)
		return (NULL);
	while((unsigned int)ft_strlen((char *)s) > start && s[start + c] && c < len)
	{
		str[c] = s[c + start];
		c++;
	}
	str[c] = '\0';
	return (str);
}