/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:52:21 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/21 16:48:54 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*r;

	start = 0;
	while (s1[start] != '\0' && check_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_char(s1[end - 1], set))
		end--;
	r = malloc(sizeof(char) * (end - start + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (start < end)
	{
		r[i] = s1[start];
		i++;
		start++;
	}
	r[i] = '\0';
	return (r);
}
