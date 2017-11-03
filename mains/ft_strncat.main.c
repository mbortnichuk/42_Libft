#include "libft.h"
size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int main()
{
	char s1[15] = "hello ";
	char s2[15] = "world";
	char s3[15] = "hello ";
	char s4[15] = "world";

	char *first = s1;
	char *second = s3;

	puts(s1);
	ft_strncat(first, s2, 3);
	puts(first);
	strncat(second, s4, 3);
	puts(second);

	return (0);
}