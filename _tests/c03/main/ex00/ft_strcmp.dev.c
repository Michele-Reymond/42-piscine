#include <string.h>
#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *s1 = "apples";
	char *s2 = "apple";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
