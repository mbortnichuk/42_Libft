#include "libft.h"
#include <stdio.h>
int main()
{
	char *src = "morning sunshine";
	char dest[30];
	printf("%s%s\n", "My strcpy: ", ft_strcpy(dest, src));
	printf("%s%s\n", "Original strcpy: ", strcpy(dest, src));
	return(0);
}
