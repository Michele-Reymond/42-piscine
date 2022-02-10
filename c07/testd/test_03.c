#include <stdio.h>
#include "../ex03/ft_strjoin.c"

void test03(int size, char **strs, char* sep, char *expected)
{
	char *ret;

	ret = 0;
	printf("ex03 ");
	ret = ft_strjoin(size, strs, sep);
	printf("size : %d, pointer : %p returned [%s] expected [%s] \n", size, ret, ret, expected);
	free(ret);
}

int main()
{
	char *strs0[3] = {"text 1","text 2","text 3"};
	char *strs1[2] = {"content 1","content 2"};
	char *strs2[1] = {"only one"};
	char *strs3[4] = {"Bonjour", "Mon", "Cher", "Adrien"};

	test03(3, strs0, " sep ", "text 1 sep text 2 sep text 3");
	test03(2, strs1, "][", "content 1][content 2");
	test03(1, strs2, " sep ", "only one");
	test03(0, strs0, " sep ", "");
	test03(-1, strs0, " sep ", "");
	test03(0, 0, 0, "");
	test03(1, strs0, 0, "");
	test03(1, 0, " ss", "");
	test03(4, strs3, " ", "Bonjour Mon Cher Adrien");
	test03(4, strs3, "|", "Bonjour|Mon|Cher|Adrien");
	
	return (0);
}
