#include <unistd.h>

void ft_putchar(char prnt)
{
	write(1, &prnt, 1);
}


void ft_print_alphabet(void)
{
   	char alph;
	alph = 'a';
			while(alph >= 'a' && alph <= 'z')
			{ 
				ft_putchar(alph);
				alph += 1;
			}
			return;

}

