#include <stdio.h>
#include "libft.h"
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
//	char *s = "      split       this for   me  !       ";
//	char *f = "                  olol";
//	char *l = "olol                     ";
	char *c = "";
//	char *d = "dima*maryana**hello*";
	char **r = ft_strsplit(c,'\65');
	
	for(int i = 0; i <= 2; i++)
	{
		for(int j = 0; j <= 2; j++)
		{
			ft_putchar(r[i][j]);
		}
		ft_putchar('\n');
	}

//	printf("%s%d\n", "wordcount test: ", ft_wordcount("helo**gerry** rendu*jello", '*'));
//	printf("%s%d\n", "wordlength test: ", ft_wordlength("hello**gerry", '*'));

	return (0);
}
