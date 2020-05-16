/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:06:55 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 19:06:55 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int		len;
	int		i;

	res = NULL;
	len = ft_strlen(s);
	i = len - 1;
	if (c == 0)
	{
		res = (char *)s + len;
		return (res);
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			res = (char *)s + i;
			break ;
		}
		i--;
	}
	return (res);
}
