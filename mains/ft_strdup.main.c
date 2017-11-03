#include "libft.h"
#include <stdio.h>
int main()
{
	char *str = "hello";
	printf("%s%s\n", "My strdup: ", ft_strdup(str));
	printf("%s%s\n", "Original strdup: ", strdup(str));
	return(0);
}
