/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:19:55 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/11 16:38:36 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char	c)
{
	int	check;

	if (c > 31 && c <= 127)
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return (check);
}

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (str[i] != '\0')
	{
		check = check * check_char(str[i]);
		i++;
	}
	return (check);
}
