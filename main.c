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
	memcpy(helloWorld, bye, 4);
	for (int i = 0; i < 11; i++)
		(helloWorld[i]?ft_putchar(helloWorld[i]): ft_putchar('0'));
	ft_putchar('\n');


	return (0);
}
