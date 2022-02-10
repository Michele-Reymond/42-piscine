/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:18:55 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/10 16:43:11 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char	c)
{
	int	check;

	if (c > 47 && c < 58)
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return (check);
}

int	ft_str_is_numeric(char	*str)
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
