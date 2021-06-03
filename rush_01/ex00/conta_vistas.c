/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conta_vistas.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:52:15 by telias-p          #+#    #+#             */
/*   Updated: 2020/11/29 20:35:36 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	conta_vista_0_0(int *matriz, int i)
{
	int j;
	int contador_enxergo;
	int check_enxergo;
	int k;

	contador_enxergo = 1;
	j = i * 4 + 1;
	while (j <= i * 4 + 3)
	{
		check_enxergo = 1;
		k = i * 4;
		while (k < j)
		{
			if (matriz[j] < matriz[k])
				check_enxergo = 0;
			k++;
		}
		if (check_enxergo == 1)
			contador_enxergo++;
		j++;
	}
	return (contador_enxergo);
}

int	conta_vista_0_1(int *matriz, int i)
{
	int j;
	int contador_enxergo;
	int check_enxergo;
	int k;

	contador_enxergo = 1;
	j = i * 4 + 2;
	while (j >= i * 4)
	{
		check_enxergo = 1;
		k = i * 4 + 3;
		while (k > j)
		{
			if (matriz[j] < matriz[k])
				check_enxergo = 0;
			k--;
		}
		if (check_enxergo == 1)
			contador_enxergo++;
		j--;
	}
	return (contador_enxergo);
}

int	conta_vista_1_0(int *matriz, int i)
{
	int j;
	int contador_enxergo;
	int check_enxergo;
	int k;

	contador_enxergo = 1;
	j = i + 4;
	while (j <= i + 12)
	{
		check_enxergo = 1;
		k = i;
		while (k < j)
		{
			if (matriz[j] < matriz[k])
				check_enxergo = 0;
			k = k + 4;
		}
		if (check_enxergo == 1)
			contador_enxergo++;
		j = j + 4;
	}
	return (contador_enxergo);
}

int	conta_vista_1_1(int *matriz, int i)
{
	int j;
	int contador_enxergo;
	int check_enxergo;
	int k;

	contador_enxergo = 1;
	j = i + 8;
	while (j >= i)
	{
		check_enxergo = 1;
		k = i + 12;
		while (k > j)
		{
			if (matriz[j] < matriz[k])
				check_enxergo = 0;
			k = k - 4;
		}
		if (check_enxergo == 1)
			contador_enxergo++;
		j = j - 4;
	}
	return (contador_enxergo);
}

int	cont_v(int *matriz, int i, int lc, int ordem)
{
	int contador_enxergo;

	contador_enxergo = 0;
	if (lc == 0 && ordem == 0)
		contador_enxergo = conta_vista_0_0(matriz, i);
	if (lc == 0 && ordem == 1)
		contador_enxergo = conta_vista_0_1(matriz, i);
	if (lc == 1 && ordem == 0)
		contador_enxergo = conta_vista_1_0(matriz, i);
	if (lc == 1 && ordem == 1)
		contador_enxergo = conta_vista_1_1(matriz, i);
	return (contador_enxergo);
}
