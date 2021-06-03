/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursao.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:51:34 by telias-p          #+#    #+#             */
/*   Updated: 2020/11/29 21:42:45 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local_library.h"

int	checa_cell(int *matriz, int i, int k)
{
	int j;
	int controle;

	controle = 1;
	j = (i / 4) * 4;
	while (j <= (i / 4) * 4 + 3)
	{
		if (matriz[j] == k)
		{
			controle = 0;
			break ;
		}
		j++;
	}
	j = (i % 4);
	while (j <= (i % 4) + 12)
	{
		if (matriz[j] == k)
		{
			controle = 0;
			break ;
		}
		j = j + 4;
	}
	return (controle);
}

int	checa_vistas(int *matriz, char *vistas)
{
	int i;
	int controle;

	i = 0;
	controle = 1;
	while (vistas[i] != '\0')
	{
		if (i <= 6 && (vistas[i] - '0') != cont_v(matriz, i / 2, 1, 0))
			controle = 0;
		if (i >= 8 && i <= 14 &&
			(vistas[i] - '0') != cont_v(matriz, (i - 8) / 2, 1, 1))
			controle = 0;
		if (i >= 16 && i <= 22 &&
			(vistas[i] - '0') != cont_v(matriz, (i - 16) / 2, 0, 0))
			controle = 0;
		if (i >= 24 && i <= 30 &&
			(vistas[i] - '0') != cont_v(matriz, (i - 24) / 2, 0, 1))
			controle = 0;
		i = i + 2;
	}
	return (controle);
}

int	fun_rec(int *matriz, int i, int *solucao, char *vistas)
{
	int k;

	k = 1;
	while (k <= 4 && *solucao == 0)
	{
		if (checa_cell(matriz, i, k) == 1)
		{
			matriz[i] = k;
			if (i == 15)
			{
				if (checa_vistas(matriz, vistas) == 1)
					*solucao = 1;
				else
					k++;
			}
			else if (i != 15 && fun_rec(matriz, i + 1, solucao, vistas) == 0)
			{
				matriz[i + 1] = 0;
				k++;
			}
		}
		else
			k++;
	}
	return (*solucao);
}
