#include <stdio.h>


int	length_argv(char *str);
int	argc_value(int argc);
int	ft_putstr(char *str);
int	just_num(char *str);
int	check_format(char *str);

int		manager_error(int argc, char *str)
{
	if (argc_value(argc) == 1)
		return (0);
	if (length_argv(str) == 1)
	   return (0);
	if (just_num(str) == 1)
		return (0);
	if (check_format(str) == 1)
		return (0);

	return (1);	
}

// si argc == 1
int	argc_value(int argc)
{
	if (argc != 2)
	{
		ft_putstr("Error");
		return (1);
	}
   	else
	{
		return (0);
	}
}


// si ce sont que des chiffres
int	just_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				ft_putstr("Error");
				return (1);
			}
		}
		i++;
	}
	return (0);
}

// un espace entre chaque chiffre
int	check_format(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i % 2) != 0)
		{
			if (str[i] != 32)
			{
				ft_putstr("Error");
				return (1);
			}
		}
		i++;
	}
	return (0);
}


// check 31 char
int	length_argv(char *str)
{
	int	countChar;

	countChar = -1;
	while (str[++countChar] != '\0'){};
	if (countChar != 31)
		{
			ft_putstr("Error");
			return(1);
		}
	return (0);
}
//"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" // 31 char
