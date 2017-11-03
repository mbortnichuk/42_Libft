#include "libft.h"
void *ft_memcpy(void dst, const void src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
int main()
{
	char str1[] = "stackoverflow";
	char str2[] = "stackoverflow";
	char *first, *second;
	first = str1;
	second = str2;

	puts("-----STRINGS-----");
	puts(str1);
	puts(str2);
	puts("-----my memmove-----");
	ft_memmove(first + 5, str1, 7);
	puts(first);
	puts("-----original memmove-----");
	memmove(second + 5, str2, 7);
	puts(second);

	return(0);
}
