#include "libft.h"
#include <stdio.h>

int main()
{
	char *str1 = "helloworld";
	char *str2 = "helleworld";

	char *str3 = "helloworld";
	char *str4 = "helleworld";

	//strequ, strnequ
	printf("%s%d\n", "strequ: ", ft_strequ(str1, str2));
	printf("%s%d\n", "strNequ: ", ft_strnequ(str3, str4, 6));

	return (0);
}
