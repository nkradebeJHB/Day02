#include <unistd.h>

void ft_putchar(char prnt)
{
	write(1, &prnt, 1);
}

void ft_is_negative(int n)
{
	char N;
	char P;
	if(n < '0')
		ft_putchar(N);
	else
		ft_putchar(P);

		
}
