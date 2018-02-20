/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mega_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:22:22 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/13 21:27:42 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

/* puts() writes a string to stdout up to but not including the null character */

int		main(void)
{

	/* PART 1 */


	/*---------- ATOI TEST ----------*/
	puts("----------------------------------------");
	puts("|              ATOI TEST               |");
	puts("----------------------------------------");
	char *str1 = "98993489";
	char *str2 = "use your brain!";
	char *srf = "	 -7654";
	char *stra = "fgt42";
	char *strad = "	42 fgt";
	char *ss = "		 - + -5";
	char *sss = "	 -5";
	puts("CASE 1: ");
	printf("%s%d\n", "My atoi: ", ft_atoi(str1));
	printf("%s%d\n", "Original atoi: ", atoi(str1));
	puts("CASE 2: ");
	printf("%s%d\n", "My atoi: ", ft_atoi(str2));
	printf("%s%d\n", "Original atoi: ", atoi(str2));
	puts("CASE 3: ");
	printf("%s%d\n", "My atoi: ", ft_atoi(srf));
	printf("%s%d\n", "Original atoi: ", atoi(srf));
	puts("CASE 4: ");
	printf("%s%d\n", "My atoi: ", ft_atoi(stra));
	printf("%s%d\n", "Original atoi: ", atoi(stra));
	puts("CASE 5: ");
	printf("%s%d\n", "My atoi: ", ft_atoi(strad));
	printf("%s%d\n", "Original atoi: ", atoi(strad));
	puts("CASE 6: ");
	printf("%s%d\n", "My atoi: ", ft_atoi(ss));
	printf("%s%d\n", "Original atoi: ", atoi(ss));
	puts("CASE 7: ");
	printf("%s%d\n", "My atoi: ", ft_atoi(sss));
	printf("%s%d\n", "Original atoi: ", atoi(sss));

	/*---------- BZERO TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              BZERO TEST              |");
	puts("----------------------------------------");
	char str3[42] = "UF is great";
	char str4[42] = "UF is great";

	ft_bzero(str3, 7);
	bzero(str4, 7);

	printf("My bzero: %s\n", str3);
	printf("Original bzero: %s\n", str4);


	/*---------- ISALNUM TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              ISALNUM TEST            |");
	puts("----------------------------------------");
	puts("CASE 1: ");
	printf("%s%d\n", "My isalnum: ", ft_isalnum('$'));
	printf("%s%d\n", "Original isalnum: ", isalnum('$'));
	puts("CASE 2: ");
	printf("%s%d\n", "My isalnum: ", ft_isalnum('f'));
	printf("%s%d\n", "Original isalnum: ", isalnum('f'));
	puts("CASE 3: ");
	printf("%s%d\n", "My isalnum: ", ft_isalnum('5'));
	printf("%s%d\n", "Original isalnum: ", isalnum('5'));

	/*---------- ISALPHA TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              ISALPHA TEST            |");
	puts("----------------------------------------");
	puts("CASE 1: ");
	printf("%s%d\n", "My isalpha: ", ft_isalpha('x'));
	printf("%s%d\n", "Original isalpha: ", isalpha('x'));
	puts("CASE 2: ");
	printf("%s%d\n", "My isalpha: ", ft_isalpha('4'));
	printf("%s%d\n", "Original isalpha: ", isalpha('4'));


	/*---------- ISASCII TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              ISASCII TEST            |");
	puts("----------------------------------------");
	puts("CASE 1: ");
	printf("%s%d\n", "My isascii: ", ft_isascii('*'));
	printf("%s%d\n", "Original isascii: ", isascii('*'));
	puts("CASE 2: ");
	printf("%s%d\n", "My isascii: ", ft_isascii('	'));
	printf("%s%d\n", "Original isascii: ", isascii('	'));


	/*---------- ISDIGIT TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              ISDIGIT TEST            |");
	puts("----------------------------------------");
	puts("CASE 1: ");
	printf("%s%d\n", "My isdigit: ", ft_isdigit('t'));
	printf("%s%d\n", "Original isdigit: ", isdigit('t'));
	puts("CASE 2: ");
	printf("%s%d\n", "My isdigit: ", ft_isdigit('9'));
	printf("%s%d\n", "Original isdigit: ", isdigit('9'));


	/*---------- ISPRINT TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              ISPRINT TEST            |");
	puts("----------------------------------------");
	puts("CASE 1: ");
	printf("%s%d\n", "My isprint: ", ft_isprint('%'));
	printf("%s%d\n", "Original isprint: ", isprint('%'));
	puts("CASE 2: ");
	printf("%s%d\n", "My isprint: ", ft_isprint(' '));
	printf("%s%d\n", "Original isprint: ", isprint(' '));


	/*---------- MEMCCPY TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              MEMCCPY TEST            |");
	puts("----------------------------------------");
	/* to run THIRD case correctly, sometimes you need 
	to comment previous 2 cases to prevent failure */
	char *str5 = "halloween";
	char dst[42];
	char *first1, *second1;
	first1 = dst;
	second1 = dst;

	printf("Original str: %s\n", str5);
	puts("CASE 1: ");
	ft_memccpy(first1, str5, 'w', 8);
	printf("%s%s\n", "My memcpy: ", first1);
	memccpy(second1, str5, 'w', 8);
	printf("%s%s\n", "Original memcpy: ", second1);
	puts("CASE 2: ");
	ft_memccpy(first1, str5, 'j', 10);
	printf("%s%s\n", "My memcpy: ", first1);
	memccpy(second1, str5, 'j', 10);
	printf("%s%s\n", "Original memcpy: ", second1);
	puts("CASE 3: ");
	ft_memccpy(first1, str5, 'w', 4);
	printf("%s%s\n", "My memcpy: ", first1);
	memccpy(second1, str5, 'w', 4);
	printf("%s%s\n", "Original memcpy: ", second1);


	/*---------- MEMCHR TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              MEMCHR TEST             |");
	puts("----------------------------------------");
	//CHECK 1 ------------------------------------
	puts("CHECK 1");

	unsigned char str6[15] = "0123456789";
	char *app;
	unsigned char stt[15] = "0123456789";
	char *aff;

	printf("Original memchr - str old: %s\n", str6);
	app = memchr(str6, '4', 6);
	if (app != NULL)
	{
		app[0] = '$';
	}
	printf("Original memchr - str new: %s\n", str6);
	puts("-------------------------------------");
	printf("My memchr - stt old: %s\n", stt);
	aff = ft_memchr(stt, '4', 6);
	if (aff != NULL)
	{
		aff[0] = '@';
	}
	printf("My memchr - stt new: %s\n", stt);

	//CHECK 2 ------------------------------------
	puts("-------");
	puts("CHECK 2");

	const char straf[] = "http://www.unitcity.ua";
	const char strb[] = "http://www.unitcity.ua";
	const char ch = '.';
	const char chr = 'b';
	char *ret, *ree, *re, *roo;

	ret = ft_memchr(straf, ch, strlen(straf));
	ree = memchr(straf, ch, strlen(straf));
	re = ft_memchr(strb, chr, strlen(strb));
	roo = memchr(strb, chr, strlen(strb));

	printf("Original string: %s\n", straf);
	puts("CASE 1: ");
	printf("My memchr |%c| is - |%s|\n", ch, ret);
	printf("Original memchr |%c| is - |%s|\n", ch, ree);
	puts("CASE 2: ");
	printf("My memchr |%c| is - |%s|\n", chr, re);
	printf("Original memchr |%c| is - |%s|\n", chr, roo);

	//CHECK 3 -----------------------------------
	puts("-------");
	puts("CHECK 3");

	char * pch;
	char strh[] = "Example string";
	pch = (char*) ft_memchr (strh, 'p', strlen(strh));
	if (pch != NULL)
		printf ("'p' found at position %ld.\n", pch - strh + 1);
	else
		printf ("'p' not found.\n");


	/*---------- MEMCMP TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              MEMCMP TEST             |");
	puts("----------------------------------------");
	unsigned char s1[15] = "hellop";
	unsigned char s2[15] = "hello";

	unsigned char s3[15] = "hellop";
	unsigned char s4[15] = "hello";

	printf("%s\n", "My memcmp: ");
	if (ft_memcmp(s1, s2, 10) == 0)
	{
		puts("Strings are indentical");
	}
	else
	{
		puts("Strings differ");
	}
	printf("%s\n", "---------------");
	printf("%s\n", "Original memcmp: ");
	if (memcmp(s3, s4, 10) == 0)
	{
		puts("String are identical");
	}
	else
	{
		puts("Strings differ");

	}


	/*---------- MEMCPY TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              MEMCPY TEST             |");
	puts("----------------------------------------");
	/*also you might want to check if dst and src might overlap (add >= 15)*/
	char strr[] = "stackovewrflow";
	char ttt[] = "hellohellohello";
	char *first2, *second2, *third1;
	first2 = strr;
	second2 = strr;
	third1 = strr;

	printf("Arr 1: %s\n", strr); 
	printf("Arr 2: %s\n", ttt);
	ft_memcpy(first2, ttt, 5);
	printf("%s%s\n", "My memcpy: ", first2);
	memcpy(second2, ttt, 5);
	printf("%s%s\n", "Original memcpy: ", second2);
	memmove(third1, ttt, 5);
	printf("%s%s\n", "memmove check: ", third1);


	/*---------- MEMMOVE TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              MEMMOVE TEST            |");
	puts("----------------------------------------");
	char str7[] = "stackoverflow";
	char str8[] = "stackoverflow";
	char *first3, *second3;
	first3 = str7;
	second3 = str8;

	puts("STRINGS: ");
	puts(str7);
	puts(str8);
	puts("-------------");
	ft_memmove(first3 + 5, str7, 7);
	printf("%s%s\n", "My memmove: ", first3);
	memmove(second3 + 5, str8, 7);
	printf("%s%s\n", "Original memmove: ", first3);


	/*---------- MEMSET TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              MEMSET TEST             |");
	puts("----------------------------------------");
	char str9[42] = "UF is for geeks";
	char str94[42] = "UF is for geeks";
	
	ft_memset(str94, '1', 6);
	memset(str9, '1', 6);
	printf("String: %s\n", str9);
	printf("My memset: %s\n", str94);
	printf("Original memset: %s\n", str9);


	/*---------- STRCAT TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRCAT TEST             |");
	puts("----------------------------------------");
	char ss1[15] = "hello ";
	char ss2[15] = "world";

	char ss3[15] = "hello ";
	
	char *first4 = ss1;
	char *second4 = ss3;

	printf("String: %s\n", ss1);
	ft_strcat(first4, ss2);
	printf("%s%s\n", "My strcat: ", first4);
	strcat(second4, ss2);
	printf("%s%s\n", "Original strcat: ", second4);


	/*---------- STRCHR TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRCHR TEST             |");
	puts("----------------------------------------");
	char *str10 = "helloween";
	char *str11 = "helloween";

	printf("String: %s\n", str10);
	puts("CASE 1: ");
	printf("%s%s\n", "My strchr: ", ft_strchr(str10, 'w'));
	printf("%s%s\n", "Original strchr: ", strchr(str11, 'w'));
	puts("CASE 2: ");
	printf("%s%s\n", "My strchr: ", ft_strchr(str10, 'f'));
	printf("%s%s\n", "Original strchr: ", strchr(str11, 'f'));


	/*---------- STRCMP TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRCMP TEST             |");
	puts("----------------------------------------");
	char *st1 = "hello";
	char *st2 = "hella";
	printf("%s%d\n", "My strcmp: ", ft_strcmp(st1, st2));
	printf("%s%d\n", "Original strcmp: ", strcmp(st1, st2));


	/*---------- STRCPY TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRCPY TEST             |");
	puts("----------------------------------------");
	/*to run first case you need to comment second and (*destr) 
	because of seg fault that they throw */
	char *srcc = "morning sunshine";
	//char *destr = NULL;
	char destrr[30];
	printf("String: %s\n", srcc);
	puts("CASE 1: ");
	printf("%s%s\n", "My strcpy: ", ft_strcpy(destrr, srcc));
	printf("%s%s\n", "Original strcpy: ", strcpy(destrr, srcc));
	// puts("CASE 2: "); 
	// printf("%s%s\n", "My strcpy: ", ft_strcpy(destr, srcc));
	// printf("%s%s\n", "Original strcpy: ", strcpy(destr, srcc));


	/*---------- STRDUP TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRDUP TEST             |");
	puts("----------------------------------------");
	char *strs = "hello";
	printf("String: %s\n", strs);
	printf("%s%s\n", "My strdup: ", ft_strdup(strs));
	printf("%s%s\n", "Original strdup: ", strdup(strs));


	/*---------- STRLCAT TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRLCAT TEST            |");
	puts("----------------------------------------");
	/* to run cases comment unused cases at the moment for better check */
	char destt1[25] = "hellohello";
	char destt2[25] = "hellohello";
	char srcr[25] = "worldworld";

	printf("Original strings: %s%s\n%s%s%s\n", destt1, " + ", destt2, " + ", srcr);
	puts("CASE 1: ");
	ft_strlcat(destt1, srcr, sizeof(destt1));
	printf("%s%s\n", "My strlcat: ", destt1);
	strlcat(destt2, srcr, sizeof(destt2));
	printf("%s%s\n", "Original strlcat: ", destt2);
	puts("CASE 2: ");
	ft_strlcat(destt1, srcr, 18);
	printf("%s%s\n", "My strlcat: ", destt1);
	strlcat(destt2, srcr, 18);
	printf("%s%s\n", "Original strlcat: ", destt2);
	puts("CASE 3: ");
	ft_strlcat(destt1, srcr, 0);
	printf("%s%s\n", "My strlcat: ", destt1);
	strlcat(destt2, srcr, 0);
	printf("%s%s\n", "Original strlcat: ", destt2);


	/*---------- STRLEN TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRLEN TEST             |");
	puts("----------------------------------------");
	char *strss = "hell99ADo  	+";
	char *sdr = "";
	printf("String: %s\n", strss);
	puts("CASE 1: ");
	printf("%s%zu\n", "My strlen: ", ft_strlen(strss));
	printf("%s%lu\n", "Original strlen: ", strlen(strss));
	puts("CASE 2: ");
	printf("%s%zu\n", "My strlen: ", ft_strlen(sdr));
	printf("%s%lu\n", "Original strlen: ", strlen(sdr));


	/*---------- STRNCAT TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRNCAT TEST            |");
	puts("----------------------------------------");
	char s1f[15] = "hello ";
	char s2f[15] = "world";
	char s3f[15] = "hello ";
	char s4f[15] = "world";

	char *first5 = s1f;
	char *second5 = s3f;

	printf("String: %s\n", s1f);
	ft_strncat(first5, s2f, 9);
	printf("%s%s\n", "My strncat: ", first5);
	strncat(second5, s4f, 9);
	printf("%s%s\n", "Original strncat: ", second5);


	/*---------- STRNCMP TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRNCMP TEST            |");
	puts("----------------------------------------");
	char *strj = "paportt";
	char *stj = "paprott";

	printf("%s%d\n", "My strncmp: ", ft_strncmp(strj, stj, 5));
	printf("%s%d\n", "Original strncmp: ", strncmp(strj, stj, 5));


	/*---------- STRNCPY TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRNCPY TEST            |");
	puts("----------------------------------------");
	char *strd = "hello world wake up";
	char destd[8];
	printf("String: %s\n", strd);
	printf("%s%s\n", "My strncpy: ", ft_strncpy(destd, strd, 7));
	printf("%s%s\n", "Original strncpy: ", strncpy(destd, strd, 7));


	/*---------- STRNSTR TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRNSTR TEST            |");
	puts("----------------------------------------");
	char *strw = "Fo Bar Baz";
	char stw[10] = "Bar";
	char stwf[10];
	//char *ptr;
	//ptr = ft_strnstr(str, st, 2);
	printf("String: %s\n", strw);
	puts("CASE 1: ");
	printf("%s%s\n", "My strnstr: ", ft_strnstr(strw, stw, 8));
	printf("%s%s\n", "Original strnstr: ", strnstr(strw, stw, 8));
	puts("CASE 2: ");
	printf("%s%s\n", "My strnstr: ", ft_strnstr(strw, stw, 3));
	printf("%s%s\n", "Original strnstr: ", strnstr(strw, stw, 3));
	puts("CASE 3: ");
	printf("%s%s\n", "My strnstr: ", ft_strnstr(strw, stwf, 6));
	printf("%s%s\n", "Original strnstr: ", strnstr(strw, stwf, 6));


	/*---------- STRRCHR TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRRCHR TEST            |");
	puts("----------------------------------------");
	char *strt1 = "hellowen";
	char *strt2 = "hellowen";

	puts("CASE 1: ");
	printf("%s%s\n", "My strrchr: " , ft_strrchr(strt1, 'p'));
	printf("%s%s\n", "Original strrchr: ", strrchr(strt2, 'p'));
	puts("CASE 2: ");
	printf("%s%s\n", "My strrchr: " , ft_strrchr(strt1, 'o'));
	printf("%s%s\n", "Original strrchr: ", strrchr(strt2, 'o'));


	/*---------- STRSTR TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRSTR TEST             |");
	puts("----------------------------------------");
	char *strg = "hello world wake up";
	char *sth = "lo";
	char sthcv[20];
	puts("CASE 1: ");
	printf("%s%s\n", "My strstr: ", ft_strstr(strg, sth));
	printf("%s%s\n", "Original strstr: ", strstr(strg, sth));
	puts("CASE 2: ");
	printf("%s%s\n", "My strstr: ", ft_strstr(strg, sthcv));
	printf("%s%s\n", "Original strstr: ", strstr(strg, sthcv));
	puts("CASE 2: ");
	printf("%s%s\n", "My strstr: ", ft_strstr(strg, "sthcv"));
	printf("%s%s\n", "Original strstr: ", strstr(strg, "sthcv"));


	/*---------- TOLOWER TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              TOLOWER TEST            |");
	puts("----------------------------------------");
	printf("%s%d\n", "My tolower: ", ft_tolower('a'));
	printf("%s%d\n", "Original tolower: " , tolower('a'));


	/*---------- TOUPPER TEST ----------*/
	puts(" ");
	puts("----------------------------------------");
	puts("|              TOUPPER TEST            |");
	puts("----------------------------------------");
	printf("%s%d\n", "My toupper: ", ft_toupper('a'));
	printf("%s%d\n", "Original toupper: ", toupper('a'));
	

	/* PART 2 */

	puts(" ");
	puts(" ");
	puts("------------------------------------------------------------");
	puts("|  **********************  PART 2  **********************  |");
	puts("------------------------------------------------------------");


	puts(" ");
	puts("----------------------------------------");
	puts("|              STRNEW TEST            |");
	puts("----------------------------------------");
	printf("%s%s\n", "My strnew: ", ft_strnew(15));



	puts(" ");
	puts("----------------------------------------");
	puts("|         STREQU VS STRNEQU TEST       |");
	puts("----------------------------------------");
	char *str1d = "helloworld";
	char *str2d = "helleworld";
	printf("| Original strings \n| %s%s%s |\n", str1d, ", ", str1d);
	//strequ, strnequ
	printf("%s%d\n", "strequ: ", ft_strequ(str1d, str2d));
	printf("%s%d\n", "strNequ: ", ft_strnequ(str1d, str2d, 6));


	puts(" ");
	puts("----------------------------------------");
	puts("|              STRSUB TEST            |");
	puts("----------------------------------------");
	char *s1ds = "helloworldstackoverflow";
	printf("| Original string: %s |\n", s1ds);
	printf("%s%s\n", "strsub: ", ft_strsub(s1ds, 9, 2));
	printf("%s%s\n", "strsub: ", ft_strsub(s1ds, 9, 10));
	printf("%s%s\n", "strsub: ", ft_strsub(s1ds, 9, 0));


	
	puts(" ");
	puts("----------------------------------------");
	puts("|              STRJOIN TEST           |");
	puts("----------------------------------------");
	char *ss1fd = "hi";
	char *ss2fd = "judy";
	printf("| Original strings: %s%s%s |\n", ss1fd, ", ", ss2fd);
	printf("%s%s\n", "strjoin: ", ft_strjoin(ss1fd, ss2fd));


	puts(" ");
	puts("----------------------------------------");
	puts("|              STRTRIM TEST           |");
	puts("----------------------------------------");
	char *ss3a = " 		 hellow	";
	printf("| Original string: %s |\n", ss3a);
	printf("%s%s\n", "strtrim: ", ft_strtrim(ss3a));


	puts(" ");
	puts("----------------------------------------");
	puts("|              STRSPLIT TEST           |");
	puts("----------------------------------------");
	/* throws SEGFAULT */
	//	char *s = "      split       this for   me  !       ";
	//char *f = "                  olol";
	//	char *l = "olol                     ";
	//	char *c = "";
	//	char *d = "dima*maryana**hello*";
	//char **r = ft_strsplit(f,' ');

	// for(int i = 0; i <= 8; i++)
	// 	for(int j = 0; j <= 8; j++)
	// 		ft_putchar(r[i][j]);
	// ft_putchar('\n');


	puts(" ");
	puts("----------------------------------------");
	puts("|              ITOA TEST              |");
	puts("----------------------------------------");
	int ig = 123456;
	printf("| Original number: %d |\n", ig);
	printf("%s%s\n", "itoa: ", ft_itoa(ig));
	printf("%s%s\n", "itoa: ", ft_itoa(ig));


	puts(" ");
	puts("----------------------------------------");
	puts("|              WORDCOUNT TEST         |");
	puts("----------------------------------------");
	char *gg = "helo**gerry** *jello";
	printf("| Original string: %s |\n", gg);
	int nu = ft_wordcount(gg, '*');
	printf("%s%d\n", "wordcount test: ", nu);


	puts(" ");
	puts("----------------------------------------");
	puts("|              WORDLENGTH TEST        |");
	puts("----------------------------------------");
	char *gerr = "hello**gerry";
	printf("| Original string: %s |\n", gerr);
	int nmbr = ft_wordlength(gerr, '*');	
	printf("%s%d\n", "wordlength test: ", nmbr);


	puts(" ");
	puts("----------------------------------------");
	puts("|              NUMBERLENGTH TEST       |");
	puts("----------------------------------------");
	int is = 123456;
	printf("| Original number: %d |\n", is);
	printf("%s%d\n", "numberslength: ", ft_numberlength(is));



	return (0);
}
