/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:07:19 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 19:08:59 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < len)
		i++;
	return (*s1 - *s2);
}
