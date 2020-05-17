/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:45:34 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 23:53:22 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	shift;
	size_t	len;
	size_t	i;

	len = ft_strlen(dest) + ft_strlen(src);
	shift = 0;
	while (n-- && dest[shift])
	{
		shift++;
	}
	i = 0;
	while (i < n && src[i])
	{
		dest[shift + i] = src[i];
		i++;
	}
	dest[i] = TERM;
	return (len);
}