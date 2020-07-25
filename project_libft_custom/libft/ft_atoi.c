/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:06:55 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/22 18:48:10 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	resu;

	i = 0;
	sign = 1;
	resu = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if ((str[i] == '+' || str[i] == '-'))
		sign = str[i++] == '-' ? -1 : 1;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		resu = resu * 10 + sign * (str[i] - '0');
		if ((resu > 0) != (sign > 0))
			return (-(1 + sign) / 2);
		i++;
	}
	return ((int)resu);
}

int main()
{
	int a = ft_atoi("2147483648");
	printf("%d \n", a);
	return 0;
}
