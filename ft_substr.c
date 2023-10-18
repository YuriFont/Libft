/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:55:49 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/18 19:14:21 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*r;

	i = 0;
	j = 0;
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			r[j] = s[i];
			j++;
		}
		i++;
	}
	r[j] = '\0';
	return (r);
}
