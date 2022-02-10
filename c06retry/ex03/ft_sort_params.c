/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:30:07 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/26 10:58:30 by mreymond         ###   ########.fr       */
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
	char	c;

	c = ' ';
	i = 1;
	while (c < '~')
	{
		i = 1;
		while (argv[i][0] != c && i < argc - 1)
			i++;
		if (argv[i][0] == c)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
		c++;
	}
}
