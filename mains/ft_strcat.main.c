#include "libft.h"
size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
}

#include <stdio.h>
int main()
{
	char s1[15] = "hello ";
	char s2[15] = "world";

	char s3[15] = "hello ";
	
	char *first = s1;
	char *second = s3;

	puts(s1);
	ft_strcat(first, s2);
	puts(first);
	strcat(second, s2);
	puts(second);

//	printf("%s%s\n", "My strcat: ", ft_strcat(s1, s2));
//	printf("%s%s\n", "Original strcat: ", strcat(s1, s2));
	return (0);	
}