/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:37:53 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/09 21:09:35 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		length;
	char	*a;

	length = 0;
	a = str;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	write(1, a, length);
}
