#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void) {
	char dest1[100] = "RDeLkYutSOzAdfeYbNAzzrWuSVHZLzCd ";
	char dest2[100] = "RDeLkYutSOzAdfeYbNAzzrWuSVHZLzCd ";
	char *src = "cbzezoSs";
	int i = 35;

	printf("%u", ft_strlcat(dest1, src, i));
	printf(" s: %s\n", dest1);
	printf("%lu", strlcat(dest2, src, i));
	printf(" s: %s\n", dest2);
}
