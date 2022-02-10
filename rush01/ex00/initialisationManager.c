#include <stdio.h>

#define LIN		6

void	ft_putstr(char *str);
void	ft_argv_in_table(char *argv, char *table);
void	ft_fill_table(char *table);
void	ft_value_map(int *mapNumber);
void	manager_initialisation(int *map, char *table, char *argv)
{
	int i;
	ft_value_map(map);
	
	i = -1;
	while (++i < LIN)
		ft_fill_table(&table[i*6]);

	ft_argv_in_table(argv, &table[0]);
}
