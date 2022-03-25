/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:30:05 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/21 16:56:04 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;
	char	*tmp;

	count = 0;
	tmp = (char *) b;
	while (count < len)
	{
		tmp[count] = (char) c;
		count++;
	}
	return (b);
}
