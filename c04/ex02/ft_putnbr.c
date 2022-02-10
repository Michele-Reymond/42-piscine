/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:44:34 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/17 14:14:23 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_max(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
}

void	ft_putnbr(int	nb)
{
	char	last;
	char	str[20];
	int		i;

	check_max(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	last = (nb % 10) + 48;
	while (nb >= 10)
	{
		nb = nb / 10;
		str[i] = (nb % 10) + 48;
		i++;
	}
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, &last, 1);
}
