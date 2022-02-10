/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:21:05 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/09 19:08:10 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	stock;

	i = 0;
	stock = 0;
	while (i < size)
	{
		stock = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = stock;
		i++;
		size--;
	}
}
