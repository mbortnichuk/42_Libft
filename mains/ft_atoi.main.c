#include "libft.h"
#include <stdio.h>
int main()
{
	char *str1 = "		 - +-5";
	char *str2 = "		 - +-5";
	
	puts("---------");
	printf("%s%d\n", "My atoi: ", ft_atoi(str1));
	printf("%s%d\n", "Original atoi: ", atoi(str2));
	puts("---------");

	return (0);
}
