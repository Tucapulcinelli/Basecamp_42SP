/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:29:00 by telias-p          #+#    #+#             */
/*   Updated: 2020/12/04 21:23:45 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str);

int		main(int argc, char *argv[])
{
	int a;

	a = 1;
	while (a < argc)
	{
		ft_print_params(argv[a]);
		a++;
	}
	return (0);
}

void	ft_print_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
