#include <unistd.h>

void ft_putchar(char prnt)
{
	write(1, &prnt, 1);
}

void ft_print_numbers(void)
{
	char num;
	num = '0';
	while(num <= '9')
	{
		ft_putchar(num);
		num++;
	}

}
