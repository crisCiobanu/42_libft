/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:23:35 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/21 17:40:19 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	char	*tempdest;
	char	*tempsrc;

	count = 0;
	tempdest = (char *)dst;
	tempsrc = (char *)src;
	while (count < n)
	{
		tempdest[count] = tempsrc[count];
		count++;
	}
	return (dst);
}
