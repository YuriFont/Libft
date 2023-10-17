/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:57:01 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/17 10:41:56 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	j = ft_strlen(dst);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size > 0 && len_dst < size - 1)
	{
		while (len_dst + i < size - 1 && src[i] != '\0')
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (len_src >= size)
		len_src = size;
	return (len_dst + len_src);
}
