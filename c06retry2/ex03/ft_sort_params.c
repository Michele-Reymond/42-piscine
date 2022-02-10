/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:30:07 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/26 13:31:04 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	c = ' ';
	j = 0;
	i = 1;
	while (c < '~')
	{
		i = 1;
		while (i <= argc - 1)
		{
			if (argv[i][0] == c)
			{
				ft_putstr(argv[i]);
				write(1, "\n", 1);
			}
			i++;
		}
		c++;
	}
}
