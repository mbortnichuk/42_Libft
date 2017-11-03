#include "libft.h"
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%s%d\n", "My isalnum: ", ft_isalnum('$'));
	printf("%s%d\n", "Original isalnum: ", isalnum('$'));
	return (0);
}