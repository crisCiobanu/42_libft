/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:43:53 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:50:53 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c)
{
	int	res;
	int	issep;

	res = 0;
	issep = 1;
	while (*str)
	{
		if (*str != c && issep == 1)
		{
			issep = 0;
			res++;
		}
		else if (*str == c)
			issep = 1;
		str++;
	}
	return (res);
}

char	**ft_split(char const *str, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**res;

	res = malloc((sizeof(char *) * (ft_wordcount(str, c) + 1)));
	if (!str || !res)
		return (0);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != c && k < 0)
			k = i;
		else if ((str[i] == c || i == ft_strlen(str)) && k >= 0)
		{
			res[j++] = ft_substr(str, k, i - k);
			k = -1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}
