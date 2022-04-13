/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:34:50 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/13 16:31:38 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	word_count(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s != '\0')
	{
		if ((char)s == c)
		{
			word_count++;
			s++;
		}
	}
	return (word_count);
}

static	char	*word_dub(char const *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(end - start + 2 * sizeof(char));
	while (start < end)
	{
		word[i] = s[start];
		i++;
		s++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		y;
	char	**split_str;
	int		start;

	start = 0;
	x = 0;
	y = 0;
	i = 0;
	split_str = malloc((word_count(s, c) + 1 * sizeof(char *)));
	if (s == NULL || split_str != NULL)
		return (NULL);
	while (x < word_count(s, c))
	{
		while (s[i] != c)
		{
			i++;
		}
		if (s[i] == c)
		{
			while (start < i)
			{
				split_str[x] = word_dub(s, start, i);
				start = i + 1;
			}
			x++;
		}
	}
	split_str[x] = NULL;
	return (split_str);
}
