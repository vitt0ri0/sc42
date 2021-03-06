/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:06:55 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/17 23:45:53 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != TERM)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_len_f(char const *s1, char const *set)
{
	int i;
	int len_f;

	i = 0;
	len_f = 0;
	while (is_inset(s1[i], set))
	{
		len_f++;
		i++;
	}
	return (len_f);
}

static int	count_len_b(char const *s1, char const *set)
{
	int i;
	int len_b;

	len_b = 0;
	i = ft_strlen(s1) - 1;
	while (is_inset(s1[i], set))
	{
		len_b++;
		i--;
	}
	return (len_b);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ss;
	int		i;
	int		len_f;
	int		len_b;
	int		len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	len_f = count_len_f(s1, set);
	len_b = count_len_b(s1, set);
	ss = (char *)malloc(sizeof(char) * (len - len_f + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (i < len - len_b - len_f)
	{
		ss[i] = s1[i + len_f];
		i++;
	}
	ss[i] = TERM;
	return (ss);
}
