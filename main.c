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
	ft_putstr("ft_memcpy():\t"); 
	memcpy(helloWorld, bye, 4);
	for (int i = 0; i < 11; i++)
		(helloWorld[i]?ft_putchar(helloWorld[i]): ft_putchar('0'));
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
	char *bug = "BUG";
	ft_putstr("ft_strcat():\t"); 
	ft_strncat(testncat, "Wo", 5);
	for (int i = 0; i < 11; i++)
		(testncat[i]?ft_putchar(testncat[i]): ft_putchar('0'));
	ft_putchar('\n');

	return (0);
}
