/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:30:26 by mreymond          #+#    #+#             */
/*   Updated: 2021/08/10 16:23:11 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char	c)
{
	int	check;

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return (check);
}

int	ft_str_is_alpha(char	*str)
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
