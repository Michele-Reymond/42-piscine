/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:16:42 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/26 15:57:17 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	size;
	int	i;
	int	*p;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (-1);
	else if (min < max)
	{
		while (i < size)
		{
			p[i] = min;
			min++;
			i++;
		}
	}
	*range = p;
	return (size);
}
/*
#include <stdio.h>

int main()
{
	int	*range;
	int i;
	int ptr;

	i = 0;
	ptr = ft_ultimate_range(&range, 0, 5);
	printf("size : %d\n", ptr);
	while (ptr > 0)
	{
		printf("%d\n", range[i]);
		i++;
		ptr--;
	}
}
*/
