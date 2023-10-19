/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:47:25 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/19 14:58:31 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_l;

	if (!little)
		return ((char *)big);
	i = 0;
	len_l = ft_strlen(little);
	while (big[i] && i < len)
	{
		if (big[i] == little[0] && ft_memcmp((char *)
				(big + i), little, len_l) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
