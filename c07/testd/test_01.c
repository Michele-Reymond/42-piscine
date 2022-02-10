#include <stdio.h>
#include "../ex01/ft_range.c"

void test01(int min, int max)
{
	int *ret;
	int range;
	int i;

	ret = 0;
	range = max - min;
	printf("ex01 ");
	printf("min : %d max : %d ", min, max);
	ret = ft_range(min, max);
	if (min >= max)
	{
		printf("range invalid, pointer : %p expect [0x0] \n", ret);
	} 
	else
	{
		i = 0;
		while (i < range)
			printf("%d ", ret[i++]);
		printf("\n");
	}
	free(ret);
}

int main()
{
	test01(2, 4);
	test01(-7, -2);
	test01(-2, -7);
	test01(2147483647, -3490);
	test01(0, 0);
	return (0);
}
