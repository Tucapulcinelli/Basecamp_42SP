/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:45:24 by telias-p          #+#    #+#             */
/*   Updated: 2020/11/30 16:23:52 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_reverse_alphabet(void)
{
	char cba;

	cba = 'z';
	while (cba >= 'a')
	{
		write(1, &cba, 1);
		cba--;
	}
}
