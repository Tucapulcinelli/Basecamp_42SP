/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:28:30 by telias-p          #+#    #+#             */
/*   Updated: 2020/12/04 21:35:11 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str);

int		main(int argc, char *argv[])
{
	int a;

	a = argc - 1;
	while (a > 0)
	{
		ft_rev_params(argv[a]);
		a--;
	}
	return (0);
}

void	ft_rev_params(char *str)
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
