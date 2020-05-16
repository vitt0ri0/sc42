/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <vitt0ri0.progr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 20:04:49 by emetapod          #+#    #+#             */
/*   Updated: 2020/05/11 20:04:49 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (!(n / 10 == 0))
			ft_putnbr_fd(-(n / 10), fd);
		ft_putchar_fd(48 - n % 10, fd);
	}
	else
	{
		if (n / 10 == 0)
			ft_putchar_fd(48 + n % 10, fd);
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(48 + n % 10, fd);
		}
	}
}
