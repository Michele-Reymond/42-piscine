#include <stdio.h>
#include <stdlib.h>

#include "../ex02/ft_ultimate_range.c"


void test02(int min, int max)
{
	int *ret;
	int range;
	int scope;
	int i;

	ret = 0;
	range = max - min;
	printf("ex02 ");
	printf("min : %d max : %d ", min, max);
	scope = ft_ultimate_range(&ret, min, max);
	if (min >= max)
	{
		printf("range invalid, pointer : %p expect [0x0] scope returned [%d] \n", ret, scope);
	} 
	else
	{
		printf("range : [%d] <==> scope returned [%d] \n", range, scope);

		i = 0;
		while (i < scope)
			printf("%d ", ret[i++]);
		printf("\n");
	}
	free(ret);
}

int main()
{
	test02(2, 4);
	test02(-7, -2);
	test02(-2, -7);
	test02(2147483647, -3490);
	test02(0, 0);
	return (0);
}
