/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:09:12 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/10 20:28:02 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char	c)
{
	int	check;

	if (c > 64 && c < 91)
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return (check);
}

int	ft_str_is_uppercase(char	*str)
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
