#include <unistd.h>
#include <stdio.h>

void	ft_change_3_1(char *table, int number, int multi)
{
	
		if (table[number + ( 2 * multi)] == '3')
		{
			table[number + ( 1 * multi)] = '1';
			table[number + ( 2 * multi)] = '3';
			table[number + ( 3 * multi)] = '2';
			table[number + ( 4 * multi)] = '4';
		}
		if (table[number + ( 1 * multi)] == '2')
		{
			table[number + ( 1 * multi)] = '2';
			table[number + ( 2 * multi)] = '1';
			table[number + ( 3 * multi)] = '3';
			table[number + ( 4 * multi)] = '4';
		}
}

void	ft_if_number_3_1(char *table, int number)
{
	if ((number >= 1) && (number <= 4))
	{
		ft_change_3_1(table, number, 6);
	}
	else if ((number >= 31) && (number <= 34))
	{
		ft_change_3_1(table, number, -6);
	}
	else if ((number >= 11) && (number <= 29) && (number % 2))
	{
		ft_change_3_1(table, number, -1);
	}
	else if ((number >= 6) && (number <= 24) && (!(number % 2)))
	{
		ft_change_3_1(table, number, 1);
	}
}
/*	3
 *
 *	2	1
 *	1	3
 *	3	2
 *	4	4
 *
 *	1
 */

void	ft_change_3_2(char *table, int number, int multi)
{
	table[number + ( 3 * multi)] = '4';
	if (table[number + ( 1 * multi)] == '2')
	{
		table[number + ( 2 * multi)] = '3';
		table[number + ( 3 * multi)] = '4';
		table[number + ( 4 * multi)] = '1';
	}
	if (table[number + ( 4 * multi)] == '1')
	{
		table[number + ( 1 * multi)] = '2';
		table[number + ( 2 * multi)] = '3';
	}
	if (table[number + ( 4 * multi)] == '2')
	{
		table[number + ( 1 * multi)] = '1';
		table[number + ( 2 * multi)] = '3';
	}
	if (table[number + ( 4 * multi)] == '3')
	{
		table[number + ( 1 * multi)] = '1';
		table[number + ( 2 * multi)] = '2';
	}
}
void	ft_if_number_3_2(char *table, int number)
{
	if ((number >= 1) && (number <= 4))
	{
		ft_change_3_2(table, number, 6);
	}
	else if ((number >= 31) && (number <= 34))
	{
		ft_change_3_2(table, number, -6);
	}
	else if ((number >= 11) && (number <= 29) && (number % 2))
	{
		ft_change_3_2(table, number, -1);
	}
	else if ((number >= 6) && (number <= 24) && (!(number % 2)))
	{
		ft_change_3_2(table, number, 1);
	}
}
/*
 *		3
 *
 *	2	1	1
 * 	3	3	2
 *	4	4	4
 *	1	2	3
 *
 *		2
 */
void	ft_if_number_3(char *table, int number, int *map, int nbMap)
{
	char nb;
	nb = table[map[(nbMap + 8) % 16]];
	if (nb  == '1')
		ft_if_number_3_1(table, number);
	if (nb  == '2')
		ft_if_number_3_2(table, number);
}
