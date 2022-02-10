/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:59:56 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/21 15:13:19 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*range;
	int	size;
	int	i;

	range = NULL;
	i = 0;
	size = max - min;
	if (min < max)
	{
		range = malloc(sizeof(int) * size);
		while (i < size)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	return (range);
}
/*
int main()
{
	int i;

	i = 0;
	int *p = ft_range(9, 12);
	if (p != NULL)
	{
		while (p[i])
		{	
			printf("%d\n", p[i]);
			i++;
		}
	}
	else
		printf("NULL\n");
}*/
