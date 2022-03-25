/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:54:17 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:37:55 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*temp;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (ft_inset(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_inset(set, s1[end -1]))
		end--;
	temp = ft_substr(s1, start, end - start);
	return (temp);
}
