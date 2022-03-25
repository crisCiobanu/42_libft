/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:46:00 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:20:31 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void*s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*chars1;
	unsigned char	*chars2;

	i = 0;
	chars1 = (unsigned char *) s1;
	chars2 = (unsigned char *) s2;
	while (i < n)
	{
		if (chars1[i] == chars2[i])
			i++;
		else
			return (chars1[i] - chars2[i]);
	}
	return (0);
}
