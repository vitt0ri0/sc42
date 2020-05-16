/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 20:04:49 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 18:57:28 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		i;
	char	last;
	int		count;

	i = 0;
	count = 0;
	last = c;
	while (s[i] != TERM)
	{
		if (s[i] != c && last == c)
			count++;
		last = s[i];
		i++;
	}
	return count;
}

static int	word_len(char const *s, int c, int start)
{
	int i;

	i = 0;
	while (s[start + i] != TERM && s[start + i] != c)
		i++;
	return i;
}

static char	*take_word(char const *s, int start, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return NULL;
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = TERM;
	return word;
}

static int	get_next_pos(const char *s, int pos, int delim)
{
	while (s[pos] == delim && s[pos])
	{
		pos++;
	}
	return pos;
}

char		**ft_split(char const *s, char c)
{
	char	**ss;
	int		count;
	int		i;
	int		pos;
	char	*word;
	int		len;


	count = count_words(s, c);
	ss = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ss)
		return (NULL);
	i = 0;
	pos = get_next_pos(s, 0, c);
	while (i < count)
	{
		len = word_len(s, c, pos);
		word = take_word(s, pos, len);
		pos = get_next_pos(s, pos+len, c);
		if (!word)
			return (NULL);
		ss[i] = word;
		i++;
	}
	ss[i] = NULL;
	return ss;
}
