#include "libft.h"
#include <stdio.h>
int main()
{
	char *str = "hello world wake up";
	char dest[8];
	printf("%s%s\n", "My strncpy: ", ft_strncpy(dest, str, 7));
	printf("%s%s\n", "Original strncpy: ", strncpy(dest, str, 7));
	return(0);
}