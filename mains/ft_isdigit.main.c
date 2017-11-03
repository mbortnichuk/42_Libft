#include "libft.h"
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%s%d\n", "My isdigit: ", ft_isdigit('t'));
	printf("%s%d\n", "Original isdigit: ", isdigit('t'));
	return(0);
}
