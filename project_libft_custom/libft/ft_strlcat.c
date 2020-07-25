/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:45:34 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/22 19:53:42 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	size_t	len1;
	size_t	len2;
	size_t	pos;
	size_t	i;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	if (dst_size <= len1)
		return (len2 + dst_size);
	pos = 0;
	while (dest[pos])
		pos++;
	i = 0;
	while (pos < dst_size - 1 && src[i])
	{
		dest[pos] = src[i];
		i++;
		pos++;
	}
	dest[pos] = TERM;
	return (len1 + len2);
}
