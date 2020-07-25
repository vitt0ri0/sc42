/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:08:44 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 22:47:55 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((t_uchar *)(dst + i)) = *((t_uchar *)(src + i));
		if (*((t_uchar *)(src + i)) == (t_uchar)c)
			return (void *)(dst + i + 1);
		i++;
	}
	return (NULL);
}
