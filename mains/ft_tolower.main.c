#include "libft.h"
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%s%d\n", "My tolower: ", ft_tolower('a'));
	printf("%s%d\n", "Original tolower: " , tolower('a'));
	return (0);
}