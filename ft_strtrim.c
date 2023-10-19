/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:52:21 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/19 11:29:46 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	final_strlen(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len_set;
	int	final_len;

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

/*char	*ft_strtrim(char const *s1, char const *set)
{
	char		*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	r = malloc()
}*/

#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", final_strlen(av[1], av[2]));
}
