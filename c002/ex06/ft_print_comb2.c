#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void)
{
	int a[2];
	int b[2];

	a[0] = '0';
	a[1] = '0';
	b[0] = '0';
	b[1] = '1';

	while(a[0] <= '9')
	{	
		while(a[1] <= '9')
		{
			while(b[0] <= '9')
			{
				while(b[1] <= '9')
				{
					write(1, &a[0], 1);
					write(1, &a[1], 1);
					write(1, " ", 1);
					write(1, &b[0], 1);
					write(1, &b[1], 1);
					write(1, ", ", 2);
					b[1]++;
				}
				b[0]++;
			}
			b[0] = a[0];
			b[1] = a[1] + 1;
			a[1]++;
		}
		a[0]++;
	}
}
