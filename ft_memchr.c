/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:19:32 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:03:36 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	count;
	char			*chr;

	chr = (char *) s;
	count = 0;
	while (count < n)
	{
		if (*(chr + count) == c)
			return (chr + count);
		count++;
	}
	return (NULL);
}
