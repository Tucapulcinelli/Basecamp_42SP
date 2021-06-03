/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:06:33 by telias-p          #+#    #+#             */
/*   Updated: 2020/11/29 21:14:20 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "local_library.h"

int	main(int argc, char *argv[])
{
	int matriz[16];
	int solucao;

	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		if (eh_valido(argv[1]) == 0)
			write(1, "Error\n", 6);
		else
		{
			solucao = 0;
			ini_matriz(matriz);
			if (fun_rec(matriz, 0, &solucao, argv[1]) == 1)
				imp_matriz(matriz);
			else
				write(1, "Error\n", 6);
		}
	}
	return (0);
}
