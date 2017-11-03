#include "libft.h"
#include <stdio.h>
int		main(void)
{
	char *str = "paportt";
	char *st = "paprott";

	printf("%s%d\n", "My strncmp: ", ft_strncmp(str, st, 5));
	printf("%s%d\n", "Original strncmp: ", strncmp(str, st, 5));
	return (0);
}