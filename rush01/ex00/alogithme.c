#include 		<stdio.h>
#include 		<unistd.h>
#define DEC		6
void	ft_if_number_1(char *table, int number);
void	ft_if_number_2(char *table, int number, int *map, int nbMap);
void	ft_if_number_3(char *table, int number, int *map, int nbMap);
void	ft_if_number_4(char *table, int number);

void	manager_algorithm(char *table, int *map)
{
	int loop = 0;
	
	while (++loop < 6)
	{

		int i;

		i = -1;
		while (++i < 16)
		{
			if (table[map[i]] == '4')
				ft_if_number_4(table, map[i]);
		}
	
		i = -1;
		while (++i < 16)
		{
			if (table[map[i]] == '1')
				ft_if_number_1(table, map[i]);
		}

		i = -1;
		while (++i < 16)
		{
			if (table[map[i]] == '3')
				ft_if_number_3(table, map[i], map, i);
		}

		i = -1;
		while (++i < 16)
		{
			if (table[map[i]] == '2')
				ft_if_number_2(table, map[i], map, i);
		}
	}
}
