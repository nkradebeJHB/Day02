/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:50:35 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/08 16:46:30 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

