#include "libft.h"
#include <stdio.h>
int main()
{
	char *str = "hello world wake up";
	char *st = "lo";
	printf("%s%s\n", "My strstr: ", ft_strstr(str, st));
	printf("%s%s\n", "Original strstr: ", strstr(str, st));
	return(0);
}
