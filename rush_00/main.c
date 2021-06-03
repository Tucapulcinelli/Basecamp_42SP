/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:20:53 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/23 02:04:59 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

/*
** call an instance from the function rush that will be used in main **
** rush(x,y) -> assign the values of x and y in the main **
** int main() - more security - need to retorn a int when the code finishes **
*/

int		main(void)
{
	rush(123, 42);
	return (0);
}
