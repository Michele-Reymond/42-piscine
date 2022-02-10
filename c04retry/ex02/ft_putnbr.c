/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:44:34 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/18 11:08:28 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int	nb)
{
	char	last;
	char	str[12];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb != -2147483648)
	{
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
		while (--i >= 0)
			write(1, &str[i], 1);
		write(1, &last, 1);
	}
}