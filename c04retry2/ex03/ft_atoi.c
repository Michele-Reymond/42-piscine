/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:17:33 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/26 10:28:52 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	i;
	int	signe;
	int	nbr;

	signe = 1;
	i = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	nbr = nbr * signe;
	return (nbr);
}
/*
#include <stdio.h>
int main()
{
	int a = ft_atoi(" --sdh1234ab567");
	printf("%d\n", a);	
}
*/
