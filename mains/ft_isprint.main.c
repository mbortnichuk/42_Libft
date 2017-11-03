#include "libft.h"
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%s%d\n", "My isprint: ", ft_isprint('%'));
	printf("%s%d\n", "Original isprint: ", isprint('%'));
	return (0);
}
