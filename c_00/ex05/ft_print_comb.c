/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:33:22 by telias-p          #+#    #+#             */
/*   Updated: 2020/11/30 17:00:08 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char a, char b, char c);

int		main(void)
{
	ft_print_comb();
	return (0);
}
void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
	a = 0;
	b = 0;
	c = 0;
	while(a < b < c)
	{
		
	}
}

void	ft_putchar(char a, char b, char c)
 {
	 write(1, &a, 1);
	 write(1, &b, 1);
	 write(1, &c, 1);
 }
 