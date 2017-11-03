#include "libft.h"
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%s%d\n", "My toupper: ", ft_toupper('a'));
	printf("%s%d\n", "Original toupper: ", toupper('a'));
	return(0);
}