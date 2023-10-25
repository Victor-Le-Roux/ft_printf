/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:23:08 by victor            #+#    #+#             */
/*   Updated: 2023/10/19 05:19:02 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s && *s != c)
	{
		++size;
		++s;
	}
	return (size);
}

static char	**ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**strs;
	int		size;
	int		j;

	j = 0;
	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (j < word)
	{
		while (*s == c)
			++s;
		size = ft_size_word(s, c);
		strs[j] = ft_substr(s, 0, size);
		if (!strs[j++])
			return (ft_free(strs, j - 1));
		s += size;
	}
	strs[j] = NULL;
	return (strs);
}
