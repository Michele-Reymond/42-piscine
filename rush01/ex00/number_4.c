void	ft_if_number_4(char *table, int number)
{
	int	index;

	if ((number >= 1) && (number <= 4))
	{
		index = 0;
		while (++index <= 4)
			table[number + (index * 6)] = index + '0';
	}
	else if ((number >= 31) && (number <= 34))
	{
		index = 0;
		while (++index <= 4)
			table[number - (index * 6)] = index + '0';
	}
	else if ((number >= 11) && (number <= 29) && (number % 2))
	{
		index = 0;
		while (++index <= 4)
			table[number - index] = index + '0';
	}
	else if ((number >= 6) && (number <= 24) && (!(number % 2)))
	{
		index = 0;
		while (++index <= 4)
			table[number + index] = index + '0';
	}
}
