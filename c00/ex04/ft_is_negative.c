#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int	n)
{
	char	nbr;
	char	p;

	nbr = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &nbr, 1);
	}
	else
		write(1, &p, 1);
}
