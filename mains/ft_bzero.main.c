#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	char *arr;
	size_t i;

	arr = b;
	i = 0;
	while (i < len)
	{
		arr[i++] = c;
	}
	return (b);
}

#include <stdio.h>
int main()
{
	char str[42] = "UF is great";
	char str2[42] = "UF is great";

	ft_bzero(str, 7);
	bzero(str2, 7);

	printf("My bzero: %s\n", str);
	printf("Original bzero: %s\n", str2);

	return(0);
}