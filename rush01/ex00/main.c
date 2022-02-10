#include		<stdio.h>
#include		<unistd.h>
#define COL		6
#define LIN		6

void	manager_algorithm(char *table, int *map);
int		manager_error(int argc, char *str);
void	manager_initialisation(int *map, char *table, char *argv);
void	ft_putstr(char *str);
void	display_table(char *str);

int	check_if_point_in_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
		{
			ft_putstr("Error");
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	table[COL][LIN];
	int		map[16];
	int		i;

	if (!manager_error(argc, argv[1]))
		return (0);
	manager_initialisation(map, table[0], argv[1]);
	manager_algorithm(table[0], map);
	if (check_if_point_in_str(table[0]))
		return (0);
	i = 0;
	while (++i < (LIN - 1))
		display_table(table[i]);
	return (0);
}
/*
	printf("ptr  : %p\n", table[0]);
	printf("ptr  : %p\n", table[1]);
	printf("ptr  : %p\n", &table[0][0]);
	printf("ptr  : %p\n", &table[0][1]);
	*/
