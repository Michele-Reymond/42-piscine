#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void) {
	char dest[50] = "This is destination";
	char *src = "This is source";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s", dest);
}
