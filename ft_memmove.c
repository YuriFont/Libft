/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:19:42 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/16 22:04:26 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	const char		*s;
	char			*d;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest || !src)
		return (NULL);
	if (d < s)
	{
		i = 0;
		while (i < n)
			d[i] = s[i++];
	}
	else
	{
		i = n - 1;
		while (i >= 0)
			d[i] = s[i--];
	}
	return (dest);
}
