/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:19:42 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/17 18:40:04 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	const cha	*s;
	char		*d;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest || !src)
		return (NULL);
	if (d < s)
	{
		i = 0;
		while (i < (int)n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
			*d++ = s[i--];
	}
	return (dest);
}
