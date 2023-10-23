/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:11:02 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/23 15:29:29 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	amontw(char const *s, char c)
{
	size_t	i;
	size_t	amont;

	i = 0;
	amont = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			amont++;
		i++;
	}
	return (amont + 1);
}

static char	**ft_mallsplit(char const *s, char **r, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			len++;
		if (s[i] == c || s[i + 1] == '\0')
		{
			r[j] = malloc(sizeof(char) * (len + 1));
			if (!r[j])
				return (NULL);
			j++;
			len = 0;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	r[j] = 0;
	return (r);
}

static void	ft_fillsplit(char const *s, char **r, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			r[j][k] = s[i];
			k++;
		}
		if (s[i] == c || s[i + 1] == '\0')
		{
			r[j][k] = '\0';
			k = 0;
			j++;
			while (s[i + 1] == c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	s = ft_strtrim(s, set);
	r = malloc(sizeof(char *) * (amontw(s, c) + 1));
	if (!r)
		return (NULL);
	ft_mallsplit(s, r, c);
	ft_fillsplit(s, r, c);
	return (r);
}
/*#include <stdio.h>
#include <stdlib.h>

// O restante do seu código ft_split aqui

int	main(void)
{
	char	**result;
	int		i;
	char	test_string[] = "O___la______d";
	char	delimiter = '_';

	result = ft_split(test_string, delimiter);
	if (!result) {
		printf("A alocação de memória falhou.\n");
		return 1;
	}

	printf("Número de palavras separadas: %d\n", amontw(test_string, delimiter));

	printf("Palavras separadas: ");
	i = 0;
	while (result[i] != NULL) {
		printf("%s ", result[i]);
		free(result[i]); // Liberar a memória alocada para cada string
		i++;
	}
	free(result); // Liberar a memória alocada para o array de strings
	printf("\n");

	return 0;
}
*/
