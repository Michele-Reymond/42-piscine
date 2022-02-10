#include		<stdio.h>
#include		<unistd.h>

#define COL		6
#define LIN		6

// TEST
// "1 2 3 4 5 6 7 8 9 A B C D E F G"
// "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
// "4 3 2 1 1 2 2 2 2 2 2 1 1 2 3 4 4"

void display_table(char *str)
{
	int i = 0;

	while (++i < (COL - 1))
	{
		write(1, &str[i] , 1);
		if (i < COL - 2)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}


void ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}



void	ft_argv_in_table(char *argv, char *table)
{
	int iARGV = -1;
	int iTABLE = 1;

	while (iTABLE != 35)
	{
		if (argv[++iARGV] != ' ')
		{
			table[iTABLE] = argv[iARGV];


				// 1st Row
				// row up
				// 1 - 4
			if (iTABLE < 4)
			{
				iTABLE++;
			}


				// 2nd Row
				// row down
				// 31 - 34
			else if ( iTABLE == 4)
			{
				iTABLE = 31;
			}

			else if ((iTABLE >= 31) && (iTABLE < 34))
			{
				iTABLE++;
			}

				// 3rd Row
				// left row
				// 6, 12, 18, 24
			else if (iTABLE == 34)
			{
				iTABLE = 6;
			}
			else if ((iTABLE >= 6) && (iTABLE < 24) && (!(iTABLE % 2)))
			{
				iTABLE += 6;
			}

				// 4th row
				// right row
				// 11, 17, 23, 29
			else if ( iTABLE == 24)
			{
				iTABLE = 11;
			}

			else if ((iTABLE >= 11) && (iTABLE <= 29) && (iTABLE % 2))
			{
				iTABLE += 6;
			}

		}
	}
}



void	ft_fill_table(char *table)
{
	int i = 0;
	table[i] = ' ';
	while (++i < (COL - 1))
			table[i] = '.';
	table[i] = ' ';
}
