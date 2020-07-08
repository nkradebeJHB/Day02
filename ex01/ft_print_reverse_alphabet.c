#include <unistd.h>

void ft_putchar(char prnt)
{
	write(1, &prnt, 1);
}


void ft_print_reverse_alphabet(void)
{
   	char alph;
	alph = 'z';
			while(alph >= 'a' && alph <= 'z')
			{ 
				ft_putchar(alph);
				alph -= 1;
			}
			return;

}

