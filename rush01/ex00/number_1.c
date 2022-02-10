void	ft_if_number_1(char *table, int number)
{
	if ((number >= 1) && (number <= 4))
	{
		table[number + 6] = '4';
	}
	else if ((number >= 31) && (number <= 34))
	{
		table[number - 6] = '4';
	}
	else if ((number >= 11) && (number <= 29) && (number % 2))
	{
		table[number - 1] = '4';
	}
	else if ((number >= 6) && (number <= 24) && (!(number % 2)))
	{
		table[number + 1] = '4';
	}
}
