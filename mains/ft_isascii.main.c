#include "libft.h"
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%s%d\n", "My isascii: ", ft_isascii('*'));
	printf("%s%d\n", "Original isascii: ", isascii('*'));
	return(0);
}
