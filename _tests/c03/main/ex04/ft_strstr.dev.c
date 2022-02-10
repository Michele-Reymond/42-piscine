#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void) {
	char *haystack = "Foo Bar Baz";
	char *needle = "Bar";

	printf("%s\n", ft_strstr(haystack, needle));
	printf("%s", strstr(haystack, needle));
}
