#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void) {
	char dest1[50] = "This is destination";
	char dest2[50] = "This is destination";
	char *src = "This is source";
	unsigned int i = 100;

	printf("%s\n", ft_strncat(dest1, src, i));
	printf("%s", strncat(dest2, src, i));
}
