/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:24:22 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/22 23:06:04 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** <unistd.h> is a library to use function write **
** ft_putchar is an object and changes according to the function rush **
*/

void	ft_putchar(char n)
{
	write(1, &n, 1);
}
