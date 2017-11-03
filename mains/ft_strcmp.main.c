#include "libft.h"
#include <stdio.h>
int main()
{
	char *s1 = "hello";
	char *s2 = "hella";
	printf("%s%d\n", "My strcmp: ", ft_strcmp(s1, s2));
	printf("%s%d\n", "Original strcmp: ", strcmp(s1, s2));
	return(0);	
}
