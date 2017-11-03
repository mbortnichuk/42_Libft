#include "libft.h"
#include <stdio.h>
int main()
{
	unsigned char s1[15] = "hellop";
	unsigned char s2[15] = "hello";

	unsigned char s3[15] = "hellop";
	unsigned char s4[15] = "hello";

	printf("%s\n", "My memcmp: ");
	if (ft_memcmp(s1, s2, 10) == 0)
	{
		puts("Strings are indentical");
	}
	else
	{
		puts("Strings differ");
	}
	printf("%s\n", "---------------");
	printf("%s\n", "Original memcmp: ");
	if (memcmp(s3, s4, 10) == 0)
	{
		puts("String are identical");
	}
	else
	{
		puts("Strings differ");
	}
}