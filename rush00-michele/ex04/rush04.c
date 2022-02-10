/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:36:59 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/08 17:18:51 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	printInner(int x, char lettre)
{
	while (x > 2)
	{
		ft_putchar(lettre);
		x--;
	}
}

void	ifParam1( int p, char lettre)
{	
	if (p != 1)
	{
		ft_putchar(lettre);
	}
}

void	printH(char first, char inner, char last, int c)
{
	ft_putchar(first);
	printInner(c, inner);
	ifParam1(c, last);
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		printH('A', 'B', 'C', x);
		while (y > 2)
		{
			printH('B', ' ', 'B', x);
			y--;
		}
		if (y != 1)
		{	
			printH('C', 'B', 'A', x);
		}
	}
}
