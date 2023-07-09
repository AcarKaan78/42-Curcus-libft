/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:25:05 by asenel            #+#    #+#             */
/*   Updated: 2023/07/07 19:40:50 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	a;
	char ch = (unsigned char)c;

	a = 0;
	while (str[a])
	    a++;
	if (ch == '\0')
	    return ((char *)&str[a]);
	a--;
	while (a >= 0 && str[a] != ch)
	    a--;
	if (a >= 0 && str[a] == ch)
	    return ((char *)&str[a]);
	return (NULL);
}


