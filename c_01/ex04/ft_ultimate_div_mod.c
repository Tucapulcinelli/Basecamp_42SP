/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:04:30 by telias-p          #+#    #+#             */
/*   Updated: 2020/12/01 22:03:17 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int resultado;
	int resto;

	if (b != 0)
	{
		resultado = *a / *b;
		resto = *a % *b;
		*a = resultado;
		*b = resto;
	}
}
