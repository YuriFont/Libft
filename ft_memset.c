/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:16:32 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/14 14:06:44 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*r;

	if (!s)
		return (NULL);
	r = s;
	i = 0;
	while (i < n)
	{
		r[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
