/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:24:07 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/23 02:04:42 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

/*
** void xx() -> check if column (c) is the first or the last, and call the **
** ft_putchar approprieted.**
*/

void	xx(int x, int c)
{
	if ((c == 0) || (c == x - 1))
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

/*
** void yy() -> check if column (c) is the first or the last, and call the **
** ft_putchar approprieted.**
*/

void	yy(int x, int c)
{
	if ((c == 0) || (c == x - 1))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

/*
** void rush() -> declaration of variables line (l) and column (c) **
** check the conditions in while/if/else if according to values write in main **
** if not -> the programm finishes **
** if yes -> write the value of xx or yy, according to the line (l) **
*/

void	rush(int x, int y)
{
	int l;
	int c;

	l = 0;
	while (l < y && x > 0 && y > 0)
	{
		c = 0;
		while (c < x)
		{
			if ((l == 0) || (l == y - 1))
			{
				xx(x, c);
			}
			else if ((l != 0) || (l != y - 1))
			{
				yy(x, c);
			}
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
