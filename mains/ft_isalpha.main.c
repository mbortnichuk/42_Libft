#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int main()
{
	puts("------");
	printf("%s%d\n", "My isalpha: ", ft_isalpha('x'));
	puts("------");
	printf("%s%d\n", "Original isalpha: ", isalpha('x'));
	puts("------");
}