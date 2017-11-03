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
	char *str1 = "hellowen";
	char *str2 = "hellowen";

	puts("---------------");
	printf("%s%s\n", "My strrchr: " , ft_strrchr(str1, 'e'));
	puts("---------------");
	printf("%s%s\n", "Original strrchr: ", strrchr(str2, 'e'));
	puts("---------------");

	return (0);
		
}