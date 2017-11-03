#include "libft.h"
#include <stdio.h>
int main()
{
	char *str = "Fo Bar Baz";
	char st[10] = "Bar";
	//char *ptr;
	//ptr = ft_strnstr(str, st, 2);

	//printf("%s\n", ptr);
	printf("%s%s\n", "My strnstr: ", ft_strnstr(str, st, 2));
	printf("%s%s\n", "Original strnstr: ", strnstr(str, st, 2));
	return(0);
}