/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:11:02 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/19 16:11:54 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	amontc(char const *s, char c)
{
	size_t	i;
	size_t	amont;

	i = 0;
	amont = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			amont++;
		i++;
	}
	return (amont);
}

char	**ft_split(char const *s, char c)
{
	
}
