#include <unistd.h>

void ft_putchar(char prnt)
{
	write(1, &prnt, 1);
}

void ft_is_negative(int n)
{
	char a = 'N';
	char b = 'P';
	if(n < 0)
		ft_putchar(a);
	else
		ft_putchar(b);

		
}

