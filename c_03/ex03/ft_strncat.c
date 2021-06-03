/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:42:47 by telias-p          #+#    #+#             */
/*   Updated: 2020/12/03 23:36:13 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
		b++;
	while (src[a] != '\0' && a < nb)
	{
		dest[b + a] = src[a];
		a++;
	}
	dest[b + a] = '\0';
	return (dest);
}
