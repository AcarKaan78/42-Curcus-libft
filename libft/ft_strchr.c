/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:15:52 by asenel            #+#    #+#             */
/*   Updated: 2023/07/07 19:14:01 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	a;
	char ch = (char)c;

	a = 0;
	while (str[a] && str[a] != ch)
		a++;
	if (str[a] == ch)
		return ((char *)&str[a]);
	return (NULL);
}

