#include <stdio.h>
#include "../ex04/ft_convert_base.c"
#include "../ex04/ft_convert_base2.c"
//#include "ft_convert_base.h"

void test04(char *nbr, char *base_in, char* base_out, char *expected)
{
	char *ret;

	ret = 0;
	printf("ex04 ");
	ret = ft_convert_base(nbr, base_in, base_out);
	printf("nbr : [%s] base_in : [%s] base_out : [%s], pointer : %p returned [%s] expected [%s] \n", nbr, base_in, base_out, ret, ret, expected);
	free(ret);
}

int main()
{
	test04("-1010101010", "01", "0123456789", "-682");
	test04("  -+-1010101010", "01", "0123456789", "(null)");
	test04("  x-+-1010101010", "01", "0123456789", "(null)");
	test04("30", "013", "0123456789", "6");
	test04("30", "013", "0123456780", "(null)");
	test04("30", "013", "1234+56789", "(null)");
	test04("5", "0123456789", "+", "(null)");

	return (0);
}
