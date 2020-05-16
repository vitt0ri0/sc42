/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:06:55 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 19:06:55 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ss;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ss = (char*)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	while (s1[j] != TERM)
	{
		ss[i] = s1[j++];
		i++;
	}
	j = 0;
	while (s2[j] != TERM)
	{
		ss[i] = s2[j++];
		i++;
	}
	ss[i] = TERM;
	return (ss);
}
