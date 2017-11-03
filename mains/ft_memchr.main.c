#include "libft.h"
#include <stdio.h>
int main()
{
	unsigned char str[15] = "0123456789";
	char *arr;
	unsigned char stt[15] = "0123456789";
	char *aff;

	puts("----------------------------------------");
	printf("Original memchr - str old: %s\n", str);
	arr = memchr(str, '4', 6);
	if (arr != NULL)
	{
		arr[0] = '$';
	}
	printf("Original memchr - str new: %s\n", str);

	puts("----------------------------------------");

	printf("My memchr - stt old: %s\n", stt);
	aff = ft_memchr(stt, '4', 6);
	if (aff != NULL)
	{
		aff[0] = '@';
	}
	printf("My memchr - stt new: %s\n", stt);
	puts("----------------------------------------");

	return (0);
}
