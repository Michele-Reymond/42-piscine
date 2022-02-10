/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:56:23 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/10 20:28:53 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char	c)
{
	int	check;

	if (c > 96 && c < 123)
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return (check);
}

int	ft_str_is_lowercase(char	*str)
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
