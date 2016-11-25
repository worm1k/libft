#include "libft.h"

int main()
{
	ft_putendl("ft_putendl()");
	ft_putstr("ft_putnbr(-2147483648):\t" ); ft_putnbr(-2147483648); ft_putchar('\n');
	ft_putstr("ft_putnbr(-2147483647):\t" ); ft_putnbr(-2147483647); ft_putchar('\n');
	ft_putstr("ft_putnbr(2147483647):\t" ); ft_putnbr(2147483647); ft_putchar('\n');
	ft_putstr("ft_strlen(\"10 symbols\"):\t"); ft_putnbr(ft_strlen("10 symbols")); ft_putchar('\n');

	char helloWorld[] = "HelloWorld";
	ft_putstr("ft_memset():\t"); ft_putstr(ft_memset(helloWorld, '*', 5)); ft_putchar('\n');
	
	ft_bzero(helloWorld, 4);
	ft_putstr("ft_bzero():\t"); 
	for (int i = 0; i < 11; i++)
		(helloWorld[i]?ft_putchar(helloWorld[i]): ft_putchar('0'));
	ft_putchar('\n');

	char bye[] = "bye!";
	ft_memcpy(helloWorld, bye, 4);
	ft_putstr("ft_memcpy():\t"); 
	for (int i = 0; i < 11; i++)
		(helloWorld[i]?ft_putchar(helloWorld[i]): ft_putchar('0'));
	ft_putchar('\n');

	ft_memmove(bye, helloWorld, 10);
	ft_putstr("ft_memmove():\t"); 
	for (int i = 0; i < 11; i++)
		(bye[i]?ft_putchar(bye[i]): ft_putchar('0'));
	ft_putchar('\n');

	char *memch = ft_memchr(helloWorld, '*', 5);
	ft_putstr("ft_memchr():\t");
	for (int i = 0; i < 11; i++)
		(bye[i]?ft_putchar(memch[i]): ft_putchar('0'));
	ft_putchar('\n');

	char randomWord1[] = "randomWord1";
	char randomWord3[] = "randomWord3";
	ft_putstr("ft_memcmp(2):\t");
	ft_putnbr(ft_memcmp(randomWord1, randomWord3, 10));
	ft_putchar('\n');

	char testcpy[11];
	ft_putstr("ft_strcpy():\t");
	ft_strcpy(testcpy, "HelloWorld");
	ft_putendl(testcpy);

	ft_putstr("ft_strdup():\t");
	ft_putendl(ft_strdup("HelloWorld"));

	char testncpy[11] = "HelloWorld";
	ft_putstr("ft_strncpy():\t"); 
	ft_strncpy(testncpy, "Bye", 5);
	for (int i = 0; i < 11; i++)
		(testncpy[i]?ft_putchar(testncpy[i]): ft_putchar('0'));
	ft_putchar('\n');

	char testcat[11] = "Hello";
	ft_putstr("ft_strcat():\t"); 
	ft_strcat(testcat, "World");
	for (int i = 0; i < 11; i++)
		(testcat[i]?ft_putchar(testcat[i]): ft_putchar('0'));
	ft_putchar('\n');

	char testncat[11] = "Hello\0\0\0OK";
	ft_putstr("ft_strcat():\t"); 
	ft_strncat(testncat, "Wo", 5);
	for (int i = 0; i < 11; i++)
		(testncat[i]?ft_putchar(testncat[i]): ft_putchar('0'));
	ft_putchar('\n');

	int szt;

	char testlcat[11] = "Hello";
	ft_putstr("ft_strlcat(7):\t"); 
	szt = ft_strlcat(testlcat, "Wo", 11);
	for (int i = 0; i < 11; i++)
		(testlcat[i]?ft_putchar(testlcat[i]): ft_putchar('0'));
	ft_putchar(' '); ft_putnbr(szt); ft_putchar('\n');

	ft_putstr("ft_strlcat(11):\t"); 
	szt = ft_strlcat(testlcat, "rld!!!!!!!!!!!!!!!!!!!!!!!!!!!!", 11);
	for (int i = 0; i < 11; i++)
		(testlcat[i]?ft_putchar(testlcat[i]): ft_putchar('0'));
	ft_putchar(' '); ft_putnbr(szt); ft_putchar('\n');

	char testchr[20] = "Where is cheater?";
	ft_putstr("ft_strchr(c):\t");
	ft_putendl(ft_strchr(testchr, 'c'));

	ft_putstr("ft_strrchr(W):\t");
	ft_putendl(ft_strrchr(testchr, 'W'));


	ft_putstr("ft_strcmp(a, abc):\t");
	ft_putnbr(ft_strcmp("a", "abc"));
	ft_putchar('\n');
	ft_putstr("ft_strcmp(abc, abc):\t");
	ft_putnbr(ft_strcmp("abc", "abc"));
	ft_putchar('\n');

	ft_putstr("ft_strncmp(abcd, abc, 3):\t");
	ft_putnbr(ft_strncmp("abcd", "abc", 3));
	ft_putchar('\n');

	ft_putstr("ft_strstr(strstr is awesome):\t");
	ft_putendl(ft_strstr("My ft_strstr is awesome", "strstr"));

	ft_putstr("ft_strnstr(strstr is awesome):\t");
	char *ptr = ft_strnstr("My ft_strstr is awesome", "strstr", 13);
	ft_putendl(ptr == NULL?"NULL":ptr);
	ft_putstr("ft_strnstr(NULL):\t");
	ptr = ft_strnstr("My ft_strstr is awesome", "strstr", 11);
	ft_putendl(ptr == NULL?"NULL":ptr);

	ft_putstr("ft_atoi(-42):\t\t");
	ft_putnbr(ft_atoi("-42"));
	ft_putchar('\n');
	ft_putstr("ft_atoi( \\t+42):\t");
	ft_putnbr(ft_atoi(" 	+42"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(-+42):\t\t");
	ft_putnbr(ft_atoi("-+42"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(+-42):\t\t");
	ft_putnbr(ft_atoi("+-42"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(- 42):\t\t");
	ft_putnbr(ft_atoi("- 42"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(+ 42):\t\t");
	ft_putnbr(ft_atoi("+ 42"));
	ft_putchar('\n');

	ft_putstr("ft_isalpha(a):\t\t");
	ft_putnbr(ft_isalpha('a'));
	ft_putchar('\n');
	ft_putstr("ft_isalpha(A):\t\t");
	ft_putnbr(ft_isalpha('A'));
	ft_putchar('\n');
	ft_putstr("ft_isalpha(8):\t\t");
	ft_putnbr(ft_isalpha('8'));
	ft_putchar('\n');

	ft_putstr("ft_isdigit(0):\t\t");
	ft_putnbr(ft_isdigit('0'));
	ft_putchar('\n');
	ft_putstr("ft_isdigit(a):\t\t");
	ft_putnbr(ft_isdigit('a'));
	ft_putchar('\n');

	ft_putstr("ft_isalnum(a):\t\t");
	ft_putnbr(ft_isalnum('a'));
	ft_putchar('\n');
	ft_putstr("ft_isalnum(A):\t\t");
	ft_putnbr(ft_isalnum('A'));
	ft_putchar('\n');
	ft_putstr("ft_isalnum(8):\t\t");
	ft_putnbr(ft_isalnum('8'));
	ft_putchar('\n');
	ft_putstr("ft_isalnum(\' \'):\t");
	ft_putnbr(ft_isalnum(' '));
	ft_putchar('\n');

	ft_putstr("ft_isprint(31):\t\t");
	ft_putnbr(ft_isprint(31));
	ft_putchar('\n');
	ft_putstr("ft_isprint(32):\t\t");
	ft_putnbr(ft_isprint(32));
	ft_putchar('\n');
	ft_putstr("ft_isprint(126):\t");
	ft_putnbr(ft_isprint(126));
	ft_putchar('\n');
	ft_putstr("ft_isprint(127):\t");
	ft_putnbr(ft_isprint(127));
	ft_putchar('\n');

	ft_putstr("ft_isascii(-1):\t\t");
	ft_putnbr(ft_isascii(-1));
	ft_putchar('\n');
	ft_putstr("ft_isascii(0):\t\t");
	ft_putnbr(ft_isascii(0));
	ft_putchar('\n');
	ft_putstr("ft_isascii(127):\t");
	ft_putnbr(ft_isascii(127));
	ft_putchar('\n');
	ft_putstr("ft_isascii(128):\t");
	ft_putnbr(ft_isascii(128));
	ft_putchar('\n');

	ft_putstr("ft_toupper(a):\t\t");
	ft_putchar(ft_toupper('a'));
	ft_putchar('\n');
	ft_putstr("ft_toupper(A):\t\t");
	ft_putchar(ft_toupper('A'));
	ft_putchar('\n');

	ft_putstr("ft_tolower(a):\t\t");
	ft_putchar(ft_tolower('a'));
	ft_putchar('\n');
	ft_putstr("ft_tolower(a):\t\t");
	ft_putchar(ft_tolower('A'));
	ft_putchar('\n');

	ft_putstr("ft_memalloc(A):\t\t");
	char *testalloc = ft_memalloc(11);
	ft_memset(testalloc, 'A', 11);
	for (int i = 0; i < 11; i++)
		(testalloc[i]?ft_putchar(testalloc[i]): ft_putchar('0'));
	ft_putchar('\n');

	ft_putstr("ft_memdel()):\t\t");
	ft_memdel((void **)&testalloc);
	if (testalloc)
		for (int i = 0; i < 11; i++)
			(testalloc[i]?ft_putchar(testalloc[i]): ft_putchar('0'));
	else
		ft_putstr("NULL");
	ft_putchar('\n');

	ft_putstr("ft_strnew():\t\t");
	char *testnew = ft_strnew(11);
	for (int i = 0; i < 11; i++)
		(testnew[i]?ft_putchar(testnew[i]): ft_putchar('0'));
	ft_putchar('\n');

	ft_putstr("ft_strdel()):\t\t");
	ft_memdel((void **)&testnew);
	if (testnew)
		for (int i = 0; i < 11; i++)
			(testnew[i]?ft_putchar(testnew[i]): ft_putchar('0'));
	else
		ft_putstr("NULL");
	ft_putchar('\n');

	ft_putstr("ft_strclr()):\t\t");
	char testclr[11] = "HelloWorld";
	ft_strclr(testclr);
	for (int i = 0; i < 11; i++)
		(testclr[i]?ft_putchar(testclr[i]): ft_putchar('0'));
	ft_putchar('\n');

	void ftt_toupper(char *c) {if ('a' <= *c && *c <= 'z') *c = *c - 'a' + 'A';}
	ft_putstr("ft_striter():\t\t");
	char testiter[11] = "HelloWorld";
	ft_striter(testiter, &ftt_toupper);
	ft_putendl(testiter);

	void fti_toupper(unsigned int i, char *c) {if ('a' <= *c && *c <= 'z') *c = *c - 'a' + 'A';}
	ft_putstr("ft_striteri():\t\t");
	char testiteri[11] = "HelloWorld";
	ft_striteri(testiteri, &fti_toupper);
	ft_putendl(testiteri);

	char f_toupper(char c)
	{
		if ('a' <= c && c <= 'z')
			return (c - 'a' + 'A');
		return (c);
	}
	ft_putstr("ft_strmap():\t\t");
	char testmap[11] = "HelloWorld";
	ft_putendl(ft_strmap(testmap, &f_toupper));

	char fi_toupper(unsigned int i, char c)
	{
		if ('a' <= c && c <= 'z')
			return (c - 'a' + 'A');
		return (c);
	}
	ft_putstr("ft_strmapi():\t\t");
	char testmapi[11] = "HelloWorld";
	ft_putendl(ft_strmapi(testmapi, &fi_toupper));


	ft_putstr("ft_strequ(1):\t\t");
	ft_putnbr(ft_strequ("Hello", "Hello"));
	ft_putchar('\n');
	ft_putstr("ft_strequ():\t\t");
	ft_putnbr(ft_strequ("Hello", "Bye"));
	ft_putchar('\n');

	ft_putstr("ft_strnequ(1):\t\t");
	ft_putnbr(ft_strnequ("Hello", "Hello", 10));
	ft_putchar('\n');
	ft_putstr("ft_strnequ(1):\t\t");
	ft_putnbr(ft_strnequ("Helloe", "Helloa", 5));
	ft_putchar('\n');
	ft_putstr("ft_strnequ(0):\t\t");
	ft_putnbr(ft_strnequ("Helloe", "Helloa", 6));
	ft_putchar('\n');





	return (0);
}
