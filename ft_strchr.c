/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:56:01 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:08:41 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*chr;
	char	tc;

	tc = (char) c;
	chr = (char *) s;
	if (c == '\0')
		return (chr + ft_strlen(chr));
	count = 0;
	while (*(chr + count))
	{
		if (*(chr + count) == tc)
			return (chr + count);
		count++;
	}
	return (NULL);
}
