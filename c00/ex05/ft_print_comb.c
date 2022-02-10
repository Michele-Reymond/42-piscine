#include <stdio.h>
#include <unistd.h>

void	print_tabs(int x, int y, int z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7' | y != '8' | z != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				print_tabs(a, b, c);
				c = c + 1;
			}
			b = b + 1;
			c = b + 1;
		}
		a = a + 1;
		b = a + 1;
		c = b + 1;
	}
}
