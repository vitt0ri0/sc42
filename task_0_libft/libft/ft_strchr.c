/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 20:04:49 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/11 20:08:30 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	res = NULL;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char)c)
		{
			res = (char *)s + i;
			break ;
		}
		i++;
	}
	return (res);
}
