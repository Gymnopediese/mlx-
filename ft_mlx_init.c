/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:31:27 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 12:55:30 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx.h"

void	ft_mlx_init(t_window *w, int x, int y, char *name)
{
	w->mlx = mlx_init();
	w->win = mlx_new_window(w->mlx, x, y, name);
}
