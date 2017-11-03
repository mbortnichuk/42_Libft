#include "libft.h"
#include <stdio.h>
int main()
{
	char *str = "halloween";
	char dst[42];
	char *first, *second;
	first = dst;
	second = dst;

	puts(str);
	ft_memccpy(first, str, 'w', 8);
	puts(first);
	memccpy(second, str, 'w', 8);
	puts(second);


//	printf("%s\n", "My memccpy: ", ft_memccpy(dst, str, 'w', 8));
//	printf("%s\n", "Original memccpy: ", memccpy(dst, str, 'w', 8));

	return(0);
}