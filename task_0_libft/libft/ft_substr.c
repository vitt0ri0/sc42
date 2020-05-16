/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:06:55 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 19:06:55 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*ss;

	i = 0;
	str_len = ft_strlen(s);
	ss = (char*)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	while (i < len && i + start < str_len && s[i] != TERM)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
