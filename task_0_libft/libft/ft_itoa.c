/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:08:49 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/16 19:08:49 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 10;
		len++;
		if (i < 0)
		{
			i /= -1;
			len++;
		}
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = count_len(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = TERM;
	if (n < 0)
	{
		s[0] = '-';
		s[len--] = '0' - n % 10;
		n = n / 10 * (-1);
	}
	while (n > 9)
	{
		s[len--] = '0' + n % 10;
		n /= 10;
	}
	if (s[len] != '-')
		s[len] = '0' + n % 10;
	return (s);
}
