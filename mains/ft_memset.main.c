#include "libft.h"
#include <stdio.h>
int main()
{
	char str[42] = "UF is for programming geeks";
	
//	ft_memset(str, '1', 6);
	memset(str, '1', 6);

//	printf("My memset: %s\n", str);
	printf("Original memset: %s\n", str);

	return (0);
}
