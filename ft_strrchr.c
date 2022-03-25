/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:13:20 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:10:39 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*chr;
	char	tc;

	tc = (char) c;
	chr = (char *) s;
	if (tc == '\0')
		return (chr + ft_strlen(chr));
	count = ft_strlen(chr);
	while (count--)
	{
		if (*(chr + count) == tc)
			return (chr + count);
	}
	return (NULL);
}
