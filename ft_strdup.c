/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:55:24 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/18 17:10:41 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*r;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	r = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!r)
		return (NULL);
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
