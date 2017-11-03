#include "libft.h"
#include <stdio.h>
int main()
{
	char *str = "hell99ADo  	+";
	printf("%s%zu\n", "My strlen: ", ft_strlen(str));
	printf("%s%lu\n", "Original strlen: ", strlen(str));
	return(0);
}
