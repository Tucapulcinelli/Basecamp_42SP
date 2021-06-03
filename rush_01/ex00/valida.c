/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valida.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:40:23 by telias-p          #+#    #+#             */
/*   Updated: 2020/11/29 21:22:07 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		tam_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		eh_valido(char *str)
{
	int controle;
	int i;

	controle = 1;
	if (tam_str(str) != 31)
		controle = 0;
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if ((i % 2 == 0) && (str[i] < '1' || str[i] > '4'))
			{
				controle = 0;
				break ;
			}
			else if (i % 2 == 1 && str[i] != ' ')
			{
				controle = 0;
				break ;
			}
			i++;
		}
	}
	return (controle);
}

void	ini_matriz(int *matriz)
{
	int i;

	i = 0;
	while (i < 16)
	{
		matriz[i] = 0;
		i++;
	}
}

void	imp_matriz(int *matriz)
{
	int		i;
	char	c;

	i = 0;
	while (i < 16)
	{
		c = matriz[i] + '0';
		write(1, &c, 1);
		if (i % 4 != 3)
			write(1, " ", 1);
		if ((i + 1) % 4 == 0)
			write(1, "\n", 1);
		i++;
	}
}
