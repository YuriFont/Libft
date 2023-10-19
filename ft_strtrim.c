/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:52:21 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/19 14:34:50 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	final_strlen(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len_set;
	size_t	final_len;

	i = 0;
	j = 0;
	len_set = ft_strlen(set);
	final_len = 0;
	while (s1[i] != '\0')
	{
		while (s1[i + j] == set[j] && set[j] && s1[i + j])
		{
			j++;
		}
		if (j == len_set)
			final_len -= len_set;
		j = 0;
		i++;
		final_len++;
	}
	return (final_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	r = malloc(sizeof(char) * (final_strlen(s1, set) + 1));
	if (!r)
		return (NULL);
	while (s1[i] != '\0' && k < final_strlen(s1, set))
	{
		while (s1[i + j] == set[j] && s1[i + j] && set[j])
		{
			j++;
		}
		if (j == ft_strlen(set))
			i += j;
		r[k++] = s1[i++];
		j = 0;
	}
	r[k] = '\0';
	return (r);
}
