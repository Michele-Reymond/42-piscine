#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void) {
	char *s1 = NULL;
	char *s2 = NULL;
	unsigned int i = 1;

	printf("%d\n", ft_strncmp(s1, s2, i));
	printf("%d", strncmp(s1, s2, i));
}
