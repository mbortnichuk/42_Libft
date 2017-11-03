#include "libft.h"
size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int main()
{
	char dest1[25] = "hellohello";
	char dest2[25] = "hellohello";
	char src[25] = "worldworld";

	ft_strlcat(dest1, src, sizeof(dest1));
	puts(dest1);

	strlcat(dest2, src, sizeof(dest2));
	puts(dest2);
	return(0);	
}