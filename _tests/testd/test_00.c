#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ex00/ft_strdup.c"

void test00()
{
	char *ret;
	char str[] = "bonjour";

	ret = 0;

	ret = (malloc(9 * sizeof (char)));
	for(int i =0; i<10 ; i++)
		ret[i] = ' ';
	free(ret);

	printf("ex00 \n");
	printf("string  : %s\n", str);
	printf("pointer before : %p\n", ret);
	ret = ft_strdup(str);
	printf("pointer after  : %p, value %s\n", ret, ret);
	printf("expected : %s\n", str);
	for(int i =0; i<10 ; i++)
		printf("'%c':%x ", ret[i], ret[i]);
	printf("\n");
	free(ret);

}

void test00_moulinette()
{
	char	*str;
	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("Q6E2e3i13wNtr");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("HQyc0LUeovzLT4NjN17ZGPKQCPvMUyResGMncyo");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("E0Pwz6mf6aV70szHe2jYq5aFRp0QH");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("pyFklcSaz34Wu9ZXodXHxE3BIjgf3l0");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("cnKs11vauRwtF8KKTPvuP40qnY");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("0bSUsQQ0WK8");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("OVw6rbC7cj4HNit6iLx");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("d");
	printf("%s\n", str);
	free(str);
}

int main()
{
	test00();
	test00_moulinette();
	return (0);	
}
