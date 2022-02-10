/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:27:39 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/23 14:22:20 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_size(int size, char **strs, char *sep)
{
	int	i;
	int	x;
	int	y;
	int	length;

	i = 0;
	x = 0;
	y = -1;
	length = 0;
	while (++y < size)
	{
		while (strs[y][x])
		{
			length++;
			x++;
		}
		while (sep[i] != '\0')
		{
			i++;
			length++;
		}
	}
	return (length);
}

char	*castor(int size, char **strs, char *sep, char *catstr)
{
	int		i;
	int		x;
	int		y;

	i = -1;
	y = -1;
	while (++y < size && strs[y])
	{
		x = -1;
		while (strs[y][++x])
			catstr[++i] = strs[y][x];
		x = -1;
		while (sep[++x] != '\0')
		{
			if (y < size - 1)
				catstr[++i] = sep[x];
		}		
	}
	catstr[i + 1] = strs[y + 1][x + 1];
	catstr[i + 2] = '\0';
	return (catstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		x;
	int		y;
	char	*catstr;

	i = -1;
	y = -1;
	if (strs == NULL || sep == NULL || size < 0)
	{
		catstr = malloc(sizeof(char));
		catstr = 0;
	}
	else
	{
		catstr = malloc(sizeof(char) * (str_size(size, strs, sep)));
		catstr = castor(size, strs, sep, catstr);
	}
	return (catstr);
}

int	main(void)
{	
	char	*test[] = {
		"lalalauuuuua",
		"leleleuuuuua",
		"lililiiiiia"
	};
	char *p = ft_strjoin(3, test, "   ");
	printf("%s", p);

}
