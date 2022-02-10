void	ft_putchar(char c);

void	ft_rush_print02(int x, int y, int x_max, int y_max)
{
	if (x == 1 && y == 1)
		ft_putchar('A');
	else if (x == x_max && y == 1)
		ft_putchar('A');
	else if (x == x_max && y == y_max)
		ft_putchar('C');
	else if (x == 1 && y == y_max)
		ft_putchar('C');
	else if (x == 1 || y == 1 || x == x_max || y == y_max)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x_max, int y_max)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= y_max)
	{
		while (x <= x_max)
		{
			ft_rush_print02(x, y, x_max, y_max);
			ft_putchar('\n');
			x++;
		}
		x = 1;
		y++;
	}
}
