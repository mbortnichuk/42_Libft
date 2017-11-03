#include "libft.h"
#include <stdio.h>
int main()
{
	char str[] = "stackovwerflow";
	char ttt[] = "hellohellohello";
	char *first, *second, *third, *fourth;
	first = str;
	second = str;
	third = str;
	fourth = ttt;

	puts(str); // writes a string to stdout up to but not including the null character.
	ft_memcpy(first, ttt, 5);
	puts(first);
	memcpy(second, ttt, 5);
	puts(second);
	memmove(third, ttt, 5);
	puts(third);

//	ft_memcpy(fourth + 5, str, 5);
//	puts(fourth);

//	printf("%s\n", "String: ", str);
//	printf("%s\n", "My memcpy: ", ft_memcpy(first, str, 5 ));
//	printf("%s\n", "Original memcpy: ", memcpy(second, str, 5));

	return (0);
}