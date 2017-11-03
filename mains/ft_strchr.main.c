#include "libft.h"
#include <stdio.h>
int main()
{
	char *str1 = "helloween";
	char *str2 = "helloween";

	printf("%s%s\n", "My strchr: ", ft_strchr(str1, 'w'));

//	strchr(str2, 'w');
//	puts(str2);
	printf("%s%s\n", "Original strchr: ", strchr(str2, 'w'));

	return (0);
}