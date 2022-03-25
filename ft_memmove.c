/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:44:30 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:01:23 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	count;
	char	*tempdest;
	char	*tempsrc;

	count = 0;
	tempdest = (char *)dst;
	tempsrc = (char *)src;
	if (src > dst)
	{
		while (count < n)
		{
			tempdest[count] = tempsrc[count];
			count++;
		}
	}
	else
	{
		while (n--)
		{
			tempdest[n] = tempsrc[n];
		}
	}
	return (dst);
}
