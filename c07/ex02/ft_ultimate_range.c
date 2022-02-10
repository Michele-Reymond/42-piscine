/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:16:42 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/24 19:37:18 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	size;
	int	i;
	int	*p;

	i = 0;
	size = 0;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		size = -1;
	else if (min < max)
	{
		size = max - min;
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
int main()
{
	int	*range;
	int i;
	int ptr;

	i = 0;
	ptr = ft_ultimate_range(&range, 9, 12);
	printf("%d\n", ptr);
	printf("%d\n", range[2]);
}
*/
