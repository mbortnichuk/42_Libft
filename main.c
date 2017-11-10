#include "libft.h"
#include <stdio.h>

int main()
{
//	char *str1 = "helloworld";
//	char *str2 = "helleworld";

//	char *str3 = "helloworld";
//	char *str4 = "helleworld";

	//strequ, strnequ
//	printf("%s%d\n", "strequ: ", ft_strequ(str1, str2));
//	printf("%s%d\n", "strNequ: ", ft_strnequ(str3, str4, 6));

	//strsub
//	char *s1 = "helloworld";
//	printf("%s%s\n", "strsub: ", ft_strsub("helloworlf", 9, 10));

	//strjoin
//	char *ss1 = "hi";
//	char *ss2 = "judy";
//	printf("%s%s\n", "strjoin: ", ft_strjoin(ss1, ss2));

//	char *ss3 = " hellow	";
//	printf("%s%s\n", "strtrim: ", ft_strtrim(ss3));

//	char *ss4 = "	 -5";
//	printf("%s%d\n", "My atoi: ", ft_atoi(ss4));
//	printf("%s%d\n", "Original atoi: ", atoi(ss4));

//	printf("%s%d\n", "wordcount test: ", ft_wordcount("helo**gerry** rendu*jello", '*'));
//	printf("%s%d\n", "wordlength test: ", ft_wordlength("hello**gerry", '*'));

//	printf("%s%s\n", "strsplit: ", ft_strsplit2("koko$haha$$gogo", '$'));

//	char s[45] = "      split       this for   me  !       ";
//	char **r = ft_strsplit(s, ' ');	

//	printf("%s%s\n", "strsplit: ", ft_strsplit());

//	int i;
//	i = -33;
//	ft_putnbr(i);
//	ft_putnbr_fd(i, 1);

//	int i = 123456;
//	printf("%s%d\n", "numberslength: ", ft_numberlength(i));
//	printf("%s%s\n", "itoa: ", ft_itoa(i));
//	printf("%s%s\n", "itoa: ", ft_itoa(i));


/* list check  */

//	char *s = "hellow";
//	size_t i = 4;
//	t_list *list;
//	list = ft_lstnew(s, i);
//	printf("%s\n", list->content);

	struct s_list a;
	struct s_list b;
	a.content = "hellow";
	b.content_size = 4;

	printf(ft_lstnew(a.content, b.content_size));

	return (0);
}
