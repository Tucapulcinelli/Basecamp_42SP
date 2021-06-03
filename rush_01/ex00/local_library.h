/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   local_library.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:04:33 by telias-p          #+#    #+#             */
/*   Updated: 2020/11/29 21:22:52 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOCAL_LIBRARY_H
# define LOCAL_LIBRARY_H

int		eh_valido(char *str);
int		fun_rec(int *matriz, int i, int *solucao, char *vistas);
void	ini_matriz(int *matriz);
void	imp_matriz(int *matriz);
int		cont_v(int *matriz, int i, int lc, int ordem);

#endif
