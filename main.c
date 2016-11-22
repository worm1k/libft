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

	return (0);
}
